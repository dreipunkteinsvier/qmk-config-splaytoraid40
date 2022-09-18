#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// for better readability
#define ___ KC_NO

#define LAYOUT_splaytoraid40( \
    K70, K10, K11, K02, K01, K12, K52, K04, K03, K14, K15, K75, \
    K71, K30, K31, K22, K21, K13, K53, K24, K23, K34, K35, K74, \
         K50, K51, K42, K41, K32, K72, K44, K43, K54, K55, \
                   K62, K61, K33, K73, K64, K63 \
) \
{ \
    { ___, K01, K02, K03, K04, ___ }, \
    { K10, K11, K12, K13, K14, K15 }, \
    { ___, K21, K22, K23, K24, ___ }, \
    { K30, K31, K32, K33, K34, K35 }, \
    { ___, K41, K42, K43, K44, ___ }, \
    { K50, K51, K52, K53, K54, K55 }, \
    { ___, K61, K62, K63, K64, ___ }, \
    { K70, K71, K72, K73, K74, K75 } \
}

#define LAYOUT_splaytoraid36( \
    K10, K11, K02, K01, K12, K52, K04, K03, K14, K15, \
    K30, K31, K22, K21, K13, K53, K24, K23, K34, K35, \
    K50, K51, K42, K41, K32, K72, K44, K43, K54, K55, \
              K62, K61, K33, K73, K64, K63 \
) \
{ \
    { ___, K01, K02, K03, K04, ___ }, \
    { K10, K11, K12, K13, K14, K15 }, \
    { ___, K21, K22, K23, K24, ___ }, \
    { K30, K31, K32, K33, K34, K35 }, \
    { ___, K41, K42, K43, K44, ___ }, \
    { K50, K51, K52, K53, K54, K55 }, \
    { ___, K61, K62, K63, K64, ___ }, \
    { ___, ___, K72, K73, ___, ___ } \
}

#define LAYOUT LAYOUT_splaytoraid40