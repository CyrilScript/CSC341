# CSC341
Class program

## C Program Compilation and Execution

This guide explains how to compile and run C programs using `gcc` and the terminal.

### Prerequisites

- Ensure you have a C compiler installed (e.g., `gcc`). You can install it using:
  - On Ubuntu/Debian:
    ```bash
    sudo apt update
    sudo apt install build-essential
    ```
  - On macOS (via Homebrew):
    ```bash
    brew install gcc
    ```

### Compilation

To compile a C program, use the following command in the terminal:

```bash
gcc -o [output_filename] [source_file].c -lpthread
