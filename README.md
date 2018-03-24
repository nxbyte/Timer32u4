# Timer32u4

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/nextseto/Timer32u4/master/LICENSE)

Low level 32u4 Timers are complicated. Here is a sample Arduino program that configures the three usable Timers when using the Arduino platform.

## Configuration for Timer1 and Timer3

**The starting timer value...**

`TCNT# = <0 ~ 2^16 - 1>`

**To enable or disable a timer1 and timer3...**

| Timer State 	| TIMSK# 	|
|-------------	|--------	|
| STOP        	| 0x0    	|
| START        	| 0x1    	|

**To configure the prescaler for the timer1 and timer3...**

| Prescaler  	| TCCR#B 	|
|------------	|--------	|
| STOP       	| 0x0    	|
| CLK / 1    	| 0x1    	|
| CLK / 8    	| 0x2    	|
| CLK / 64   	| 0x3    	|
| CLK / 256  	| 0x4    	|
| CLK / 1024 	| 0x5    	|

## Configuration for Timer4

**Set the starting timer value...**

`TCNT# = <0 ~ 2^8 - 1>`

*Note: Additional settings can enable 10-bit mode*

**To enable or disable a timer...**

| Timer State 	| TIMSK# 		|
|-------------	|-----------	|
| STOP        	| 0x0    		|
| START        	| (1<<TOIE4)	|

**To configure the prescaler for the timer...**

| Prescaler  	| TCCR#B 	|
|------------	|--------	|
| STOP       	| 0x0    	|
| CLK / 1    	| 0x1    	|
| CLK / 2    	| 0x2    	|
| CLK / 4   	| 0x3    	|
| CLK / 8  	| 0x4    	|
| CLK / 16 	| 0x5    	|
| CLK / 32   	| 0x6    	|
| CLK / 64   	| 0x7    	|
| CLK / 128  	| 0x8    	|
| CLK / 256  	| 0x9    	|
| CLK / 512 	| 0xA    	|
| CLK / 1024 	| 0xB    	|
| CLK / 2048 	| 0xC    	|
| CLK / 4096 	| 0xD    	|
| CLK / 8192	| 0xE    	|
| CLK / 16384	| 0xF    	|

Source 1: [AVR Interrupts](https://gist.github.com/psgs/e7ec757412c0b5cda60f854be57792fd)

Source 2: [Datasheet](https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/ATMega32U4.pdf)

## License

All source code in Timer32u4 is released under the MIT license. See LICENSE for details.