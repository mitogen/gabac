/**
 * @file
 * @copyright This file is part of the GABAC encoder. See LICENCE and/or
 * https://github.com/mitogen/gabac for more details.
 */

#ifndef GABAC_ENCODING_H_
#define GABAC_ENCODING_H_

namespace gabac {

class IOConfiguration;
class EncodingConfiguration;

void encode(
        const IOConfiguration& conf,
        const EncodingConfiguration& enConf
);

}  // namespace gabac

#endif  // GABAC_ENCODING_H_
