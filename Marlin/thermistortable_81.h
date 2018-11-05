/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Thermistor 80, from 3D Raion
const short temptable_81[][2] PROGMEM = {
  //{OV(35), 250},
  {OV(56), 234},  //{OV(41), 240},
  {OV(61), 229},  //{OV(44), 235},
  {OV(66), 225},  //{OV(48), 227},
  {OV(71), 221},  //{OV(52), 223},
  {OV(78), 216},  //{OV(56), 212},
  {OV(84), 212},  //{OV(66), 205},
  {OV(92), 205},  //{OV(78), 200},
  {OV(100), 200}, //{OV(91), 195},
  {OV(110), 197}, //{OV(109), 185},
  {OV(120), 193}, //{OV(131), 174},
  {OV(132), 188}, //{OV(154), 168},
  {OV(144), 184}, //{OV(187), 158},
  {OV(157), 179}, //{OV(224), 153},
  {OV(172), 174}, //{OV(267), 142},
  {OV(189), 169}, //{OV(321), 132},
  {OV(206), 164}, //{OV(380), 116},
  {OV(226), 159}, //{OV(445), 110},
  {OV(246), 155}, //{OV(514), 103},
  {OV(270), 149}, //{OV(592), 89},
  {OV(320), 139}, //{OV(664), 76},
  {OV(349), 134}, //{OV(737), 67},
  {OV(381), 128}, //{OV(807), 57},
  {OV(412), 123}, //{OV(857), 52},
  {OV(447), 118}, //{OV(903), 45},
  {OV(481), 113}, //{OV(939), 37},
  {OV(517), 108}, //{OV(1010), 0}
  {OV(553), 102},
  {OV(592), 97},
  {OV(667), 87},
  {OV(739), 77},
  {OV(803), 67},
  {OV(903), 47},
  { OV( 939),  40 },
  { OV( 954),  35 },
  { OV( 966),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};