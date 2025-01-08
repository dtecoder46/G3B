![G3B logo](/images/G3B.jpeg)

- ⚡️ A fast SSR connector between a Nuxt front-end, a C++ server, and an SQLite database
- ✨ Uses Google Fonts and TailwindCSS to form a glamourous interface
- 🪪 License: MIT
- 🌲 Branches: 1
- 🌟 Stars: 0

## How to Access

Find the G3B repository on GitHub. Navigate to the link provided on the right-hand side. Then type in the command: ./script.sh. Answer the favorite color prompt and press ENTER. The website should appear with the background color being your favorite color! It will also show the previous color input.

NOTE: Your color input must be in Tailwind color format (e.g.: fuchsia-300, emerald-500)

## Structure

### First Run

After C++ receives color input, it writes Vue syntax with the input color into the Vue file. An execute function is activated, which stores the input into an SQLite database, completing the first run

### Second Run

To retrieve the first input, C++ reads the SQL file and removes unnecessary characters to extract the data. The input is integrated into the Vue markup to be displayed on the website

## Code of Conduct

Any user who forks this repository must abide by the following rules

1. Do not create a website using this template that
- Is discriminatory or racist
- Shows disregard for the poor or marginalized
- Is intended to be used for committing a crime

2. Any repository that breaks these regulations will be promptly reported

## My Logo

![logo](/images/logo.jpeg)
