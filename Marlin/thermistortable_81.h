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
  {OV(35), 250},
  {OV(41), 240},
  {OV(44), 235},
  {OV(48), 227},
  {OV(52), 223},
  {OV(56), 212},
  {OV(66), 205},
  {OV(78), 200},
  {OV(91), 195},
  {OV(109), 185},
  {OV(131), 174},
  {OV(154), 168},
  {OV(187), 158},
  {OV(224), 153},
  {OV(267), 142},
  {OV(321), 132},
  {OV(380), 116},
  {OV(445), 110},
  {OV(514), 103},
  {OV(592), 89},
  {OV(664), 76},
  {OV(737), 67},
  {OV(807), 57},
  {OV(857), 52},
  {OV(903), 45},
  {OV(939), 37},
  {OV(1010), 0}
};