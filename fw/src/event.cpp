/*
 *  Author:     Michael Lloyd (micl.dev)
 *  Version:    1.0.0
 *  Variant:    A
 *  Date:       21/09/22
 *
 *      __   ___.--'_`. 
 *     ( _`.'. -   'o` ) 
 *     _\.'_'      _.-'  
 *     ( `. )    //`    
 *     \_`-'`---'\\__,   
 *      \\`        \`--    
 *
 */

/*
 * ================================================================================================
 * The purpose of this system is to create control nodes to both produce diagnostic information, 
 * and to interface with interrupts or thread hooks. 
 *
 * It (should) follows the Go4 Mediator design pattern, so, it's a publish-subscribe based runtime
 * implementation. I do not want this system to sit on a thread, so every call is compositional 
 * and the PicopadSystem class will utilize it intermittently for logging and event hooks. 
 * ================================================================================================
*/

// FIXME:
#include "include/event.h"

// ================================================================================================
// SYSTEM EVENTS
// ================================================================================================

// ========================================================
// Flash Memory Events

// =====================
// Flash Schema Edit

// =====================
// Flash Connection ERR 

// =====================
// Flash Read

// =====================
// Flash Write

// =====================
// Flash Blk Copy

// =====================
// Flash CRC Test

// =====================
// Flsah CRC Pass

// =====================
// Flash CRC Fail

// =====================
// Overflow/Bound ERR

// ========================================================
// Hardware Status Events (Faults, overvoltage, etc)

// ========================================================
// Core blocking & return Events 

// ========================================================
// Mode selection Events 

// =====================
// BOOTSEL Flag tripped 

// =====================
// PROG mode selected 

// =====================
// CONFIGURE mode selected 

// =====================
// PLAY mode selected

// =====================
// Debug mode selected 

// ========================================================
// Reset Events 

// =====================
// Software Reset REQ

// =====================
// Software Reset ACK

// ========================================================


// * - * 

// ================================================================================================
// COMMUNICATION EVENTS
// ================================================================================================

// ================================================================================================
// BUTTON EVENTS
// ================================================================================================

// ================================================================================================
// TIMING EVENTS
// ================================================================================================

// ================================================================================================
// LED EVENTS
// ================================================================================================

// ================================================================================================
// DEBUG EVENTS (Leaving this alone for a while)
// ================================================================================================

