# stdin_hex_to_stdout_bin
Simple tool converts hex text to binary

It reads stdin and writes to stdout.

    gcc stdin_hex_to_stdout_bin.c -o stdin_hex_to_stdout_bin
    echo '48656C6C6F2C20576F726C6421' | ./stdin_hex_to_stdout_bin
    cat some_hex_text_file.txt | ./stdin_hex_to_stdout_bin
