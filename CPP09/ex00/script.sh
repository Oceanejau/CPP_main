#!/bin/bash


TEST="input.csv"
TEST_1="input_errors.csv"
TEST_2="input_ok.csv"
TEST_4="input_main.csv"

FILE_1="res_input_errors.txt"
FILE_2="res_input_ok.txt"
FILE_3="res_input_chmod.txt"
FILE_4="res_input_main.txt"

mv "$TEST_1" "$TEST"
./btc < "$TEST" > "$FILE_1"
mv "$TEST" "$TEST_1"

mv "$TEST_2" "$TEST"
./btc < "$TEST" > "$FILE_2"
mv "$TEST" "$TEST_2"

touch "$TEST"
chmod u-r "$TEST"
./btc "$TEST" > "$FILE_3"
rm -rf "$TEST"

mv "$TEST_4" "$TEST"
./btc < "$TEST" > "$FILE_4"
mv "$TEST" "$TEST_4"