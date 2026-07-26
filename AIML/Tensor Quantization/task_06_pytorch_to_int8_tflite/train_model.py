import torch
import torch.nn as nn
import torch.optim as optim
from torch.utils.data import DataLoader
from torchvision import datasets, transforms

import os
from pathlib import Path

import numpy as np

from model_definition import SimpleCNN

os.chdir(Path(__file__).resolve().parent)
print(os.getcwd())


device = torch.device(
    "cuda" if torch.cuda.is_available() else "cpu"
)

print(device)

transform = transforms.Compose([
    transforms.ToTensor()
])

train_dataset = datasets.MNIST(
    root="./data",
    train=True,
    download=True,
    transform=transform
)

test_dataset = datasets.MNIST(
    root="./data",
    train=False,
    download=True,
    transform=transform
)

train_loader = DataLoader(
    train_dataset,
    batch_size=64,
    shuffle=True
)

test_loader = DataLoader(
    test_dataset,
    batch_size=64,
    shuffle=False
)

model = SimpleCNN().to(device)

criterion = nn.CrossEntropyLoss()

optimizer = optim.Adam(
    model.parameters(),
    lr=0.001
)

epochs = 5

for epoch in range(epochs):

    model.train()

    running_loss = 0

    for images, labels in train_loader:

        images = images.to(device)
        labels = labels.to(device)

        optimizer.zero_grad()

        outputs = model(images)

        loss = criterion(outputs, labels)

        loss.backward()

        optimizer.step()

        running_loss += loss.item()

    print(
        f"Epoch {epoch+1}/{epochs}, "
        f"Loss = {running_loss/len(train_loader):.4f}"
    )
model.eval()

correct = 0
total = 0

with torch.no_grad():

    for images, labels in test_loader:

        images = images.to(device)
        labels = labels.to(device)

        outputs = model(images)

        predictions = outputs.argmax(dim=1)

        correct += (predictions == labels).sum().item()

        total += labels.size(0)

accuracy = 100 * correct / total

print(f"Test Accuracy: {accuracy:.2f}%")

torch.save(model.state_dict(), "model.pth")

print("Model saved successfully.")

os.makedirs("calib", exist_ok=True)

for i in range(50):

    image, _ = test_dataset[i]

    np.save(
        f"calib/{i}.npy",
        image.numpy()
    )

print("Calibration data saved.")