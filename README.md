# 🔐 C-Based Command-Line Password Generator

A lightweight and fast **Linux password generator** written in C. It generates strong, random passwords based on your selected options: lowercase, uppercase, digits, and symbols.

---

## ✨ Features

- ✅ Customisable password length (8–100 characters)
- 🧩 User-defined inclusion of character types
- 🔒 Simple logic with strong entropy (uses `time(NULL)` + `rand()`)
- 💻 Lightweight C code – no external dependencies

---

## 🛠️ Usage

```bash
./passgene <length> <lowercase(y/n)> <uppercase(y/n)> <digits(y/n)> <symbols(y/n)>
```

### Example:

```bash
./passgene 16 y y y y
```

✅ This generates a 16-character password using all available character sets.

---

## 🔍 Example Output

```bash
Length 16
Generated Password: fG7@dB2#pLm1!Qe%
```

---

## ⚙️ Compilation

```bash
gcc passwordgen.c -o passwordgen
```

Then run it:

```bash
./passwordgen 12 y n y n
```

---

## ⚠️ Input Rules

- Length must be **between 8 and 100**
- At least **one character set** must be enabled (`y`)
- If rules are violated, you’ll see:

```bash
Usage: ./passgene <length> <lowercase(y/n)> <uppercase(y/n)> <digits(y/n)> <symbols(y/n)>
```

---

## 📁 Files

| File | Description |
|------|-------------|
| `passgene.c` | Main source code |
| `Makefile` | (Optional) Build automation |
| `README.md` | This file |

---

## 🧑‍💻 Author

**Nizath** – Cybersecurity Researcher & Red Teaming Enthusiast 🇱🇰
📧 Email: nisathnisath606@gmail.com  
🔗 GitHub: [github.com/nizath](https://github.com/fortrixsec)  
🧠 Motto: *“Discipline and deep focus will take you where motivation can’t.”*


---

## 📌 Tip

> For more secure randomness in real-world applications, consider replacing `rand()` with:
> 
> - `getrandom()` (Linux syscall)
> - `/dev/urandom` file descriptor
