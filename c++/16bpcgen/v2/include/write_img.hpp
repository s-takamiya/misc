#ifndef _16BPCGEN_WRITE_IMG_HPP_
#define _16BPCGEN_WRITE_IMG_HPP_

#include <string>
#include "FrameBuffer.hpp"

#ifdef ENABLE_TIFF
int write_16bpc_tiff(const std::string& output_filename, const FrameBuffer& buffer);
#endif

#ifdef ENABLE_PNG
int write_16bpc_png(const std::string& output_filename, const FrameBuffer& buffer);
#endif
int write_16bpc_img(const std::string& output_filename, const FrameBuffer& buffer);
bool have_ext(const std::string& filename, const std::string& ext);
std::string append_extension(const std::string& filename, const std::string& ext);

#endif
