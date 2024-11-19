# CPP-Module-00

This first module of C++ is designed to help you understand the specifities of the language when compared to C. Time to dive into Object Oriented Programming! 

## State

[![cpp-module-00 Build](https://img.shields.io/github/actions/workflow/status/WOLFIE-OG/CPP-Module-00/makefile.yml?style=for-the-badge)](https://github.com/WOLFIE-OG/CPP-Module-00/actions/workflows/makefile.yml) ![cpp-module-00 Score](https://img.shields.io/badge/Score-N/A-grey?style=for-the-badge)

## Installation & Building

To install and build

```bash
  git clone https://github.com/WOLFIE-OG/CPP-Module-00
  cd CPP-Module-00
  cd ex00
  make
  cd ../ex01
  make
  cd ../ex02
  make
```

## Testing

Tests for each exXX

### ex00

```bash
  cd ex00
  ./megaphone
  ./megaphone "shhhhh... I think the students are asleep..."
  ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
```

### ex01

```bash
  cd ex01
  ./phonebook
```

### ex02

```bash
  cd ex02 
  ./bank | awk '{ print $2 }' > output.log
  cat 19920104_091532.log | awk '{ print $2 }' | diff -s - output.log && rm output.log
```