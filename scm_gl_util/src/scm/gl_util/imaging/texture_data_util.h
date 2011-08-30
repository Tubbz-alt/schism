
#ifndef SCM_GL_UTIL_TEXTURE_DATA_UTIL_H_INCLUDED
#define SCM_GL_UTIL_TEXTURE_DATA_UTIL_H_INCLUDED

#include <scm/core/memory.h>
#include <scm/core/numeric_types.h>

#include <scm/gl_core/data_formats.h>

namespace scm {
namespace gl {
namespace util {

bool
image_flip_vertical(const shared_array<uint8>& data, data_format fmt, unsigned w, unsigned h);

} // namespace util
} // namespace gl
} // namespace scm

#endif // SCM_GL_UTIL_TEXTURE_DATA_UTIL_H_INCLUDED
