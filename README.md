# C++ Module Assignments

This repository contains three C++ module assignments that cover various aspects of object-oriented programming and C++ concepts.

## Assignment 1: [cpp_module00](cpp_module00/README.md)

- 📁 **Assignment Directory**: [cpp_module00/](cpp_module00/)
- 📘 **Assignment Description**: [Read Detailed Assignment Description](cpp_module00/README.md)
<p align="center">
  <a href="https://repl.it/@dalexhd/exam-rank-0501" target="_blank">
    <img src="https://repl.it/badge/github/dalexhd/exam-rank-05" alt="Repl.it">
  </a>
</p>

## Assignment 2: [cpp_module01](cpp_module01/README.md)

- 📁 **Assignment Directory**: [cpp_module01/](cpp_module01/)
- 📘 **Assignment Description**: [Read Detailed Assignment Description](cpp_module01/README.md)
<p align="center">
  <a href="https://repl.it/@dalexhd/exam-rank-0502" target="_blank">
    <img src="https://repl.it/badge/github/dalexhd/exam-rank-05" alt="Repl.it">
  </a>
</p>

## Assignment 3: [cpp_module02](cpp_module02/README.md)

- 📁 **Assignment Directory**: [cpp_module02/](cpp_module02/)
- 📘 **Assignment Description**: [Read Detailed Assignment Description](cpp_module02/README.md)
<p align="center">
  <a href="https://repl.it/@dalexhd/exam-rank-0503" target="_blank">
    <img src="https://repl.it/badge/github/dalexhd/exam-rank-05" alt="Repl.it">
  </a>
</p>

# Vim Basic Usage Guide

## Common Vim Commands

- ✏️ `i`: Enter insert mode before the cursor.
- ✏️ `I`: Enter insert mode at the beginning of the line.
- ✏️ `a`: Enter insert mode after the cursor.
- ✏️ `A`: Enter insert mode at the end of the line.
- ✂️ `x`: Delete the character under the cursor.
- ✂️ `dd`: Delete the current line.
- 💾 `:w`: Save the file.
- 🚪 `:q`: Quit Vim.
- 🚪 `:q!`: Force quit without saving.
- 💾 `:wq` or `:x`: Save and exit.
- 💾 `ZZ`: Save and exit.
- 📋 `yy`: Yank (copy) the current line.
- 📋 `p`: Paste the yanked text.
- ↩️ `u`: Undo the last change.
- ↪️ `Ctrl + r`: Redo the last undo.
- 📂 `:e <file>`: Edit a different file.
- 📂 `:sp <file>`: Split the screen to edit a different file.

## Vim Settings

- 📊 `set number`: Display line numbers.
- 🖱️ `set mouse=a`: Enable mouse support.
- 🎨 `syntax on`: Enable syntax highlighting.
- 📝 `set autoindent`: Enable auto-indentation.

### Configuring Vim Settings by Default

To configure Vim settings by default, you can create a `.vimrc` file in your home directory:

1. Open a terminal and navigate to your home directory:

   ```bash
   cd ~
   ```

2. Create or edit the `.vimrc` file:

   ```bash
   nano .vimrc  # Create and edit .vimrc using the nano editor
   ```

   or

   ```bash
   vim .vimrc   # Create and edit .vimrc using the Vim editor
   ```

3. Add the Vim settings you want to apply by default to your `.vimrc` file. For example, to set line numbers and syntax highlighting:

   ```vim
   " Enable line numbers
   set number

   " Enable syntax highlighting
   syntax on
   ```

4. Save and exit the text editor.

5. Restart Vim or open a new terminal, and the settings in your `.vimrc` will be applied by default whenever you use Vim.

These are additional basic Vim commands and settings, and you can configure your preferred settings to be applied by default using a `.vimrc` file.
