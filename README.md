# Some Helpful notes for CP

# Command to Build cpp program

- g++ -std=c++11 -O2 -Wall filename.cpp -o output_name

# Input / Output from file

- freopen("input.txt", "r", stdin);
- freopen("output.txt", "w", stdout);

# For Large Output

- use mod **10^9 + 7** to fit it in long long or int.

# Print Floating point till any decimal place

- printf("%.9f\n", x);, **%.9f** means 9 places.
