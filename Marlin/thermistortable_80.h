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
const short temptable_80[][2] PROGMEM = {
  {OV(1), 641.1},
  {OV(21), 276},
  {OV(24), 263.6},
  {OV(33), 247.4},
  {OV(43), 231.1},
  {OV(51), 220.5},
  {OV(65), 210.1},
  {OV(79), 200.1},
  {OV(95), 189.6},
  {OV(116), 179.9},
  {OV(140), 170.7},
  {OV(171), 160.7},
  {OV(209), 150.2},
  {OV(254), 140.1},
  {OV(304), 130.3},
  {OV(365), 120.5},
  {OV(439), 110},
  {OV(515), 106},
  {OV(598), 90.3},
  {OV(673), 80.9},
  {OV(759), 70.1},
  {OV(824), 60.3},
  {OV(881), 50.6},
  {OV(926), 40.3},
  {OV(939), 37.4},
  {OV(965), 29.4},
  {OV(975), 24.9},
  {OV(1000), 11.6},
  {OV(1010), 0}
};