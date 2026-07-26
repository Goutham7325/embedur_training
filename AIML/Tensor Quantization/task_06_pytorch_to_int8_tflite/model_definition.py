import torch
import torch.nn as nn


class SimpleCNN(nn.Module):
    """
    Simple CNN for MNIST classification.
    Input : (N, 1, 28, 28)
    Output: (N, 10)
    """

    def __init__(self, num_classes=10):
        super(SimpleCNN, self).__init__()

        self.features = nn.Sequential(
            # Input: 1 x 28 x 28
            nn.Conv2d(
                in_channels=1,
                out_channels=16,
                kernel_size=3,
                padding=1
            ),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(kernel_size=2, stride=2),

            # 16 x 14 x 14
            nn.Conv2d(
                in_channels=16,
                out_channels=32,
                kernel_size=3,
                padding=1
            ),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(kernel_size=2, stride=2)
        )

        self.classifier = nn.Sequential(
            nn.Flatten(),

            # 32 x 7 x 7 = 1568
            nn.Linear(32 * 7 * 7, 64),
            nn.ReLU(inplace=True),

            nn.Linear(64, num_classes)
        )

    def forward(self, x):
        x = self.features(x)
        x = self.classifier(x)
        return x


if __name__ == "__main__":

    model = SimpleCNN()

    print(model)

    dummy = torch.randn(1, 1, 28, 28)

    output = model(dummy)

    print("\nInput shape :", dummy.shape)
    print("Output shape:", output.shape)