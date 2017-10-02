#pragma once
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
	unsigned char RAM[65536];// Assuming 64kb
	unsigned char VRAM[65536];// Assuming 64kb


public: 
	cpu() 
	{
		
	}
};