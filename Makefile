.PHONY : clean all
.DEFAULT_GOAL := all

CC=arm-none-eabi-g++
OBJCOPY=arm-none-eabi-objcopy
EMULATOR=/Applications/mGBA.app/Contents/MacOS/mGBA
SOURCES= main.cpp Sprite.cpp Utilities.cpp Object.cpp

clean:
	rm -rf *.o
	rm -rf *.sav
	rm -rf *.elf
	rm -rf *.gba

debug: main.cpp
	g++ -g $(SOURCES) -o test.exe

compile: main.cpp
	$(CC) -o main.elf -mthumb-interwork -mthumb -O2 -specs=gba.specs $(SOURCES)

copybin: main.elf
	$(OBJCOPY) -v -O binary main.elf main.gba

run: main.gba
	$(EMULATOR) ./main.gba

all: clean compile copybin
