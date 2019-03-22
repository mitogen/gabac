/* C interface main include */

#ifndef GABAC_GABAC_H_
#define GABAC_GABAC_H_

#ifdef __cplusplus

/* General */
#include "gabac/constants.h"
#include "gabac/exceptions.h"

/* Encode / Decode */
#include "gabac/decoding.h"
#include "gabac/encoding.h"
#include "gabac/configuration.h"

/* Transformations */
#include "gabac/diff_coding.h"
#include "gabac/equality_coding.h"
#include "gabac/lut_transform.h"
#include "gabac/match_coding.h"
#include "gabac/rle_coding.h"

/* io */
#include "gabac/stream_handler.h"
#include "gabac/data_block.h"

#endif

#include "gabac/c_interface.h"

#endif /* GABAC_GABAC_H_ */
