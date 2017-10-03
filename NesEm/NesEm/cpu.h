#pragma once
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class cpu {
private:
	//CPU
	unsigned int PC;//program counter
	unsigned short SP;//stack pointer/position
	unsigned char X, Y; //x and y registers temp storage in cpu
	unsigned char A; //accumilator stores math output
	bool C;//carryFlag;//true if carrys over to 0 from 255
	bool Z;// zeroFlag; //true if math == 0
	bool I;// interruptDisable;//true when it doesnt accept IRQ which interupts CPU
	bool D;//decimalMode;//NES cpu doesnt use
	bool B;//breakCommand;//causes an IRQ to disrupt the CPU
	bool V;//overFlowFlag;//APPENDIX A
	bool N;//negativeFlag;//true if sign bit is 1 
	/*	Flag storage
		7 6 5 4 3 2 1 0
		N V   B D I Z C
	*/
	
	//RAMs
	/*
	CPU Memory Map

	--------------------------------------- $10000
	Upper Bank of Cartridge ROM //16k 
	--------------------------------------- $C000
	Lower Bank of Cartridge ROM //16k
	--------------------------------------- $8000
	Cartridge RAM (may be battery-backed) 
	--------------------------------------- $6000
	Expansion Modules
	--------------------------------------- $5000
	Input/Output
	--------------------------------------- $2000
	2kB Internal RAM, mirrored 4 times
	--------------------------------------- $0000



	PPU Memory Map

	--------------------------------------- $4000
	Empty
	--------------------------------------- $3F20
	Sprite Palette
	--------------------------------------- $3F10
	Image Palette
	--------------------------------------- $3F00
	Empty
	--------------------------------------- $3000
	Attribute Table 3
	--------------------------------------- $2FC0
	Name Table 3 (32x30 tiles)
	--------------------------------------- $2C00
	Attribute Table 2
	--------------------------------------- $2BC0
	Name Table 2 (32x30 tiles)
	--------------------------------------- $2800
	Attribute Table 1
	--------------------------------------- $27C0
	Name Table 1 (32x30 tiles)
	--------------------------------------- $2400
	Attribute Table 0
	--------------------------------------- $23C0
	Name Table 0 (32x30 tiles)
	--------------------------------------- $2000
	Pattern Table 1 (256x2x8, may be VROM)
	--------------------------------------- $1000
	Pattern Table 0 (256x2x8, may be VROM)
	--------------------------------------- $0000
	*/
	unsigned char RAM[65536];// 64k
	unsigned char VRAM[16348];// 16k
	unsigned char SPR_RAM[256];// 256bytes (sprite ram) for the PPU


	//ROM
	unsigned char ROM[65536];
public: 
	cpu() 
	{
		
	}
	void RomLoader(string fileName) 
	{
		ifstream infile;
		infile.open(fileName, ios::binary | ios::in);
		if (!infile) {
			cout << "Error: Can't open the file named: " << fileName << endl;
			system("PAUSE");
		}

		for (int i = 0; i < 65536; ++i) {
			ROM[i] = infile.get();
		}
	}
	void dumpRom()
	{
		
	}

};