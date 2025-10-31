SRC = $(wildcard src/*.cpp)
TARGET = projeto

run: 
	g++ -std=c++17 $(SRC) -o $(TARGET)
	$(TARGET).exe

clean:
	del /Q $(TARGET).exe