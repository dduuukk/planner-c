# Save the current directory
original_dir=$(pwd)

# Function to display usage information
usage() {
    echo "Usage: $0 [debug|release]"
    exit 1
}

# Check if the correct number of arguments is provided
if [ "$#" -ne 1 ]; then
    usage
fi

# Set the build type based on the argument
BUILD_TYPE=""
BUILD_DIR=""
if [ "$1" = "debug" ]; then
    BUILD_TYPE="Debug"
    BUILD_DIR="debug"
elif [ "$1" = "release" ]; then
    BUILD_TYPE="Release"
    BUILD_DIR="release"
else
    usage
fi

# Create the build directory if it doesn't exist
BUILD_DIR="build/$BUILD_DIR"
mkdir -p "$BUILD_DIR"

# Navigate to the build directory
cd "$BUILD_DIR"

# Run CMake and build the project
cmake -DCMAKE_BUILD_TYPE=$BUILD_TYPE ../..
make

# Return to the original directory
cd "$original_dir"