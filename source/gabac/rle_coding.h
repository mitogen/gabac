/**
 * @file
 * @copyright This file is part of the GABAC encoder. See LICENCE and/or
 * https://github.com/mitogen/gabac for more details.
 */

#ifndef GABAC_RLE_CODING_H_
#define GABAC_RLE_CODING_H_

#include <cstdint>

#include "gabac/data_block.h"

namespace gabac {


void transformRleCoding(
        uint64_t guard,
        DataBlock *rawValues,
        DataBlock *lengths
);


void inverseTransformRleCoding(
        uint64_t guard,
        DataBlock *rawValues,
        DataBlock *lengths
);


}  // namespace gabac

#endif  // GABAC_RLE_CODING_H_
