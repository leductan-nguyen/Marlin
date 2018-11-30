/**
 * Marlin 3D Printer Firmware
 * Configuration file make for 3D Raion Marlin
 * Please visit https://github.com/BelovedTutu/Marlin for supports and Q&A
 */
#ifndef CONFIGURATION_3DRAION_H
#define CONFIGURATION_3DRAION_H

// @author info
#define STRING_CONFIG_H_AUTHOR "(Tung, TronxyX5S config)"
#define CONFIGURATION_H_VERSION 010110
#define CONFIGURATION_ADV_H_VERSION 010110
// @motherboard section
#ifndef MOTHERBOARD
  //#define MOTHERBOARD BOARD_MELZI currently deactivate to test on tronxy with RAMPS
  #define MOTHERBOARD BOARD_RAMPS_14_EFB
#endif

// @thermistor section

#define TEMP_SENSOR_0 81
// #define TEMP_SENSOR_1 0
#define TEMP_SENSOR_BED 1

#define HEATER_0_MINTEMP 5
// #define HEATER_1_MINTEMP 5
#define BED_MINTEMP 5

// Temperature displayed on LCD will equal (max_temp - 15°)
#define HEATER_0_MAXTEMP 275
// #define HEATER_1_MAXTEMP 275
#define BED_MAXTEMP 105

// @PID
#define DEFAULT_Kp 17.10
#define DEFAULT_Ki 0.83
#define DEFAULT_Kd 87.89

//#define DEFAULT_Kp 17.08
//#define DEFAULT_Ki 0.9
//#define DEFAULT_Kd 81.15
// @section extruder

// This option prevents extrusion if the temperature is below EXTRUDE_MINTEMP.
// It also enables the M302 command to set the minimum extrusion temperature
// or to allow moving the extruder regardless of the hotend temperature.
// *** IT IS HIGHLY RECOMMENDED TO LEAVE THIS OPTION ENABLED! ***
//#define PREVENT_COLD_EXTRUSION
//#define EXTRUDE_MINTEMP 170

// This option prevents a single extrusion longer than EXTRUDE_MAXLENGTH.
// Note that for Bowden Extruders a too-small value here may prevent loading.
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 999

// @endstop section

// Specify here all the endstop connectors that are connected to any endstop or probe.
// Almost all printers will be using one per axis. Probes will use one or more of the
// extra connectors. Leave undefined any used for non-endstop and non-probe purposes.
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
// #define USE_YMAX_PLUG
// #define USE_ZMAX_PLUG

// Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
#define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#define Z_MIN_PROBE_ENDSTOP_INVERTING true // set to true to invert the logic of the probe.

// @section motion

/**
 * Default Settings
 *
 * These settings can be reset by M502
 *
 * Note that if EEPROM is enabled, saved values will override these.
 */

/**
 * With this option each E stepper can have its own factors for the
 * following movement settings. If fewer factors are given than the
 * total number of extruders, the last value applies to the rest.
 */
//#define DISTINCT_E_FACTORS

/**
 * Default Axis Steps Per Unit (steps/mm)
 * Override with M92
 *                                      X, Y, Z, E0 [, E1[, E2[, E3[, E4]]]]
 */
// #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, 800, 97.544618 }
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 97.544618 }
/**
 * Default Max Feed Rate (mm/s)
 * Override with M203
 *                                      X, Y, Z, E0 [, E1[, E2[, E3[, E4]]]]
 */
#define DEFAULT_MAX_FEEDRATE          { 400, 400, 25, 70 }

/**
 * Default Max Acceleration (change/s) change = mm/s
 * (Maximum start speed for accelerated moves)
 * Override with M201
 *                                      X, Y, Z, E0 [, E1[, E2[, E3[, E4]]]]
 */
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 }

/**
 * Default Acceleration (change/s) change = mm/s
 * Override with M204
 *
 *   M204 P    Acceleration
 *   M204 R    Retract Acceleration
 *   M204 T    Travel Acceleration
 */
#define DEFAULT_ACCELERATION          3000    // X, Y, Z and E acceleration for printing moves
#define DEFAULT_RETRACT_ACCELERATION  3000    // E acceleration for retracts
#define DEFAULT_TRAVEL_ACCELERATION   3000    // X, Y, Z acceleration for travel (non printing) moves

/**
 * Default Jerk (mm/s)
 * Override with M205 X Y Z E
 *
 * "Jerk" specifies the minimum speed change that requires acceleration.
 * When changing speed and direction, if the difference is less than the
 * value set here, it may happen instantaneously.
 */
#define DEFAULT_XJERK                 10.0
#define DEFAULT_YJERK                 10.0
#define DEFAULT_ZJERK                  0.3
#define DEFAULT_EJERK                  5.0

// @machine section

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true

// @section homing

// Homing hits each endstop, retracts by these distances, then does a slower bump.
#define X_HOME_BUMP_MM 5
#define Y_HOME_BUMP_MM 5
#define Z_HOME_BUMP_MM 5
#define HOMING_BUMP_DIVISOR { 4, 4, 4 }  // Re-Bump Speed Divisor (Divides the Homing Feedrate)
#define MANUAL_FEEDRATE {50*60, 50*60, 12*60, 60} // Feedrates for manual moves along X, Y, Z, E from panel
// Homing speeds (mm/m)
#define HOMING_FEEDRATE_XY (50*60)
#define HOMING_FEEDRATE_Z  (8*60)

// @extruder section

// For direct drive extruder v9 set to true, for geared extruder set to false.
#define INVERT_E0_DIR false
// #define INVERT_E1_DIR false

// @homing section

//#define NO_MOTION_BEFORE_HOMING  // Inhibit movement until all axes have been homed

//#define UNKNOWN_Z_NO_RAISE // Don't raise Z (lower the bed) if Z is "unknown." For beds that fall when Z is powered off.

//#define Z_HOMING_HEIGHT 4  // (in mm) Minimal z height before homing (G28) for Z clearance above the bed, clamps, ...
                             // Be sure you have this distance over your Z_MAX_POS in case.

// Direction of endstops when homing; 1=MAX, -1=MIN
// :[-1,1]
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

// @section machine

// The size of the print bed
#define X_BED_SIZE 323
#define Y_BED_SIZE 323

// Travel limits (mm) after homing, corresponding to endstop positions.
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 375 //Change according to machine's dimension

// @section lcd

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, es_utf8, eu, fi, fr, fr_utf8,
 *    gl, hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cn':'Chinese', 'cz':'Czech', 'cz_utf8':'Czech (UTF8)', 'de':'German', 'el':'Greek', 'el-gr':'Greek (Greece)', 'es':'Spanish', 'es_utf8':'Spanish (UTF8)', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'fr_utf8':'French (UTF8)', 'gl':'Galician', 'hr':'Croatian', 'it':'Italian', 'kana':'Japanese', 'kana_utf8':'Japanese (UTF8)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt-br':'Portuguese (Brazilian)', 'pt-br_utf8':'Portuguese (Brazilian UTF8)', 'pt_utf8':'Portuguese (UTF8)', 'ru':'Russian', 'sk_utf8':'Slovak (UTF8)', 'tr':'Turkish', 'uk':'Ukrainian', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Taiwan)', test':'TEST' }
 */
#define LCD_LANGUAGE en
#define MANUAL_BED_SETTING

#endif //CONFIGURATION_3DRAION_H
