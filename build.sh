# Save the current directory
original_dir=$(pwd)

# # Create the build directory if it doesn't exist
# mkdir -p build

# Navigate to the build directory
cd build

# Run CMake and build the project
cmake ..
make

# Return to the original directory
cd "$original_dir"