# Assignment 5
## - Goutham R, 7th February 2026
## Objective
Create a Bash script named **`file_analyzer.sh`** to demonstrate the following concepts:

---

## 1. Recursive Functions
- Write a recursive function to search for files in a directory and its subdirectories containing a specific keyword.

---

## 2. Redirection and Error Handling
- Log errors (e.g., invalid arguments, missing files) to **`errors.log`**.
- Display the same errors in the terminal.

---

## 3. Here Document and Here String
- Use a **here document** to display a help menu when the `--help` option is passed.
- Search for a keyword in a specified file using a **here string**.

---

## 4. Special Parameters
- Use special parameters such as:
  - `$0`
  - `$#`
  - `$?`
  - `$@`
- Provide meaningful feedback using these parameters.

---

## 5. Regular Expressions
- Validate inputs using regular expressions:
  - Check if the file exists.
  - Ensure the keyword is not empty and is valid.

---

## 6. Command-Line Arguments Using `getopts`
Use `getopts` to handle the following options:

- `-d <directory>` : Directory to search.
- `-k <keyword>` : Keyword to search.
- `-f <file>` : File to search directly.
- `--help` : Display the help menu.

---

## Example Usage

### Recursively search a directory for a keyword
```bash
./file_analyzer.sh -d logs -k error
