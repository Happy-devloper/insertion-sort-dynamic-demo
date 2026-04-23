# insertion-sort-dynamic-demo

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()

**A dynamic, interactive demonstration of the Insertion Sort algorithm, written entirely in C. Users can insert new elements in real-time and watch the array maintain its sorted order.**[reference:0]

## 📋 Table of Contents
- [About the Project](#about-the-project)
- [Key Features](#key-features)
- [How Insertion Sort Works](#how-insertion-sort-works)
- [Time & Space Complexity](#time--space-complexity)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation & Compilation](#installation--compilation)
- [Usage](#usage)
  - [Interactive Menu](#interactive-menu)
  - [Example Session](#example-session)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## About the Project

This project offers a hands-on way to understand the Insertion Sort algorithm. Instead of simply sorting a static array, this program lets you **insert new numbers mid-execution** and observe how the array reorganizes itself to stay sorted. It's designed for students, educators, and anyone curious about fundamental sorting algorithms.[reference:1]

## Key Features

- **Real-Time Insertion:** Add new elements while the program is running—no need to restart.[reference:2]
- **Sorted Maintenance:** The array is always displayed in ascending order after each operation.
- **Simple Interactive Menu:** Easy-to-navigate console interface.[reference:3]
- **Pure C Implementation:** Demonstrates memory management and algorithm design in a low-level language.

## How Insertion Sort Works

Insertion Sort builds the final sorted array one element at a time. It works similarly to how you might sort a hand of playing cards:

1. **Divide:** The algorithm conceptually splits the array into a *sorted* section (initially just the first element) and an *unsorted* section (the remaining elements).[reference:4]
2. **Pick:** Take the next element from the unsorted section.
3. **Shift & Insert:** Compare this element with those in the sorted section, shifting larger elements to the right until the correct spot is found, then insert the element.[reference:5]
4. **Repeat:** Continue until all elements have been moved into the sorted section.

### Step-by-Step Example
Let's sort `[7, 12, 9, 11, 3]`:[reference:6]

| Step | Array State | Action |
|:---:|:---|:---|
| 1 | `[7, 12, 9, 11, 3]` | First element `7` is trivially sorted. |
| 2 | `[7, 12, 9, 11, 3]` | `12` is already in the correct position. |
| 3 | `[7, 9, 12, 11, 3]` | `9` is inserted between `7` and `12`. |
| 4 | `[7, 9, 11, 12, 3]` | `11` is inserted between `9` and `12`. |
| 5 | `[3, 7, 9, 11, 12]` | `3` is inserted at the beginning. |

## Time & Space Complexity

| Complexity | Best Case | Average Case | Worst Case |
|:---|:---:|:---:|:---:|
| **Time** | O(n) | O(n²) | O(n²) |
| **Space** | O(1) | O(1) | O(1) |

- **Best Case:** When the array is already sorted, each new element only needs one comparison.[reference:7]
- **Average & Worst Case:** When the array is in random or reverse order, each insertion may require shifting many elements.[reference:8]
- **Space:** Insertion Sort is an *in-place* algorithm—it only needs a constant amount of extra memory.[reference:9]

## Getting Started

### Prerequisites
- **GCC** (MinGW on Windows, or any standard C compiler)
- A terminal/command prompt

### Installation & Compilation
1. **Clone the repository:**
   ```bash
   git clone https://github.com/Happy-devloper/insertion-sort-dynamic-demo.git
   cd insertion-sort-dynamic-demo/src
