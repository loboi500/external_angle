// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gles_2_0_autogen.h:
//   Defines the GLES 2.0 entry points.

#ifndef LIBGLESV2_ENTRY_POINTS_GLES_2_0_AUTOGEN_H_
#define LIBGLESV2_ENTRY_POINTS_GLES_2_0_AUTOGEN_H_

#include <GLES2/gl2.h>
#include <export.h>

extern "C" {
ANGLE_EXPORT void GL_APIENTRY GL_ActiveTexture(GLenum texture);
ANGLE_EXPORT void GL_APIENTRY GL_AttachShader(GLuint program, GLuint shader);
ANGLE_EXPORT void GL_APIENTRY GL_BindAttribLocation(GLuint program,
                                                    GLuint index,
                                                    const GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_BindBuffer(GLenum target, GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_BindFramebuffer(GLenum target, GLuint framebuffer);
ANGLE_EXPORT void GL_APIENTRY GL_BindRenderbuffer(GLenum target, GLuint renderbuffer);
ANGLE_EXPORT void GL_APIENTRY GL_BindTexture(GLenum target, GLuint texture);
ANGLE_EXPORT void GL_APIENTRY GL_BlendColor(GLfloat red,
                                            GLfloat green,
                                            GLfloat blue,
                                            GLfloat alpha);
ANGLE_EXPORT void GL_APIENTRY GL_BlendEquation(GLenum mode);
ANGLE_EXPORT void GL_APIENTRY GL_BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
ANGLE_EXPORT void GL_APIENTRY GL_BlendFunc(GLenum sfactor, GLenum dfactor);
ANGLE_EXPORT void GL_APIENTRY GL_BlendFuncSeparate(GLenum sfactorRGB,
                                                   GLenum dfactorRGB,
                                                   GLenum sfactorAlpha,
                                                   GLenum dfactorAlpha);
ANGLE_EXPORT void GL_APIENTRY GL_BufferData(GLenum target,
                                            GLsizeiptr size,
                                            const void *data,
                                            GLenum usage);
ANGLE_EXPORT void GL_APIENTRY GL_BufferSubData(GLenum target,
                                               GLintptr offset,
                                               GLsizeiptr size,
                                               const void *data);
ANGLE_EXPORT GLenum GL_APIENTRY GL_CheckFramebufferStatus(GLenum target);
ANGLE_EXPORT void GL_APIENTRY GL_Clear(GLbitfield mask);
ANGLE_EXPORT void GL_APIENTRY GL_ClearColor(GLfloat red,
                                            GLfloat green,
                                            GLfloat blue,
                                            GLfloat alpha);
ANGLE_EXPORT void GL_APIENTRY GL_ClearDepthf(GLfloat d);
ANGLE_EXPORT void GL_APIENTRY GL_ClearStencil(GLint s);
ANGLE_EXPORT void GL_APIENTRY GL_ColorMask(GLboolean red,
                                           GLboolean green,
                                           GLboolean blue,
                                           GLboolean alpha);
ANGLE_EXPORT void GL_APIENTRY GL_CompileShader(GLuint shader);
ANGLE_EXPORT void GL_APIENTRY GL_CompressedTexImage2D(GLenum target,
                                                      GLint level,
                                                      GLenum internalformat,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLint border,
                                                      GLsizei imageSize,
                                                      const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CompressedTexSubImage2D(GLenum target,
                                                         GLint level,
                                                         GLint xoffset,
                                                         GLint yoffset,
                                                         GLsizei width,
                                                         GLsizei height,
                                                         GLenum format,
                                                         GLsizei imageSize,
                                                         const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CopyTexImage2D(GLenum target,
                                                GLint level,
                                                GLenum internalformat,
                                                GLint x,
                                                GLint y,
                                                GLsizei width,
                                                GLsizei height,
                                                GLint border);
ANGLE_EXPORT void GL_APIENTRY GL_CopyTexSubImage2D(GLenum target,
                                                   GLint level,
                                                   GLint xoffset,
                                                   GLint yoffset,
                                                   GLint x,
                                                   GLint y,
                                                   GLsizei width,
                                                   GLsizei height);
ANGLE_EXPORT GLuint GL_APIENTRY GL_CreateProgram();
ANGLE_EXPORT GLuint GL_APIENTRY GL_CreateShader(GLenum type);
ANGLE_EXPORT void GL_APIENTRY GL_CullFace(GLenum mode);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteBuffers(GLsizei n, const GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteFramebuffers(GLsizei n, const GLuint *framebuffers);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteProgram(GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteShader(GLuint shader);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteTextures(GLsizei n, const GLuint *textures);
ANGLE_EXPORT void GL_APIENTRY GL_DepthFunc(GLenum func);
ANGLE_EXPORT void GL_APIENTRY GL_DepthMask(GLboolean flag);
ANGLE_EXPORT void GL_APIENTRY GL_DepthRangef(GLfloat n, GLfloat f);
ANGLE_EXPORT void GL_APIENTRY GL_DetachShader(GLuint program, GLuint shader);
ANGLE_EXPORT void GL_APIENTRY GL_Disable(GLenum cap);
ANGLE_EXPORT void GL_APIENTRY GL_DisableVertexAttribArray(GLuint index);
ANGLE_EXPORT void GL_APIENTRY GL_DrawArrays(GLenum mode, GLint first, GLsizei count);
ANGLE_EXPORT void GL_APIENTRY GL_DrawElements(GLenum mode,
                                              GLsizei count,
                                              GLenum type,
                                              const void *indices);
ANGLE_EXPORT void GL_APIENTRY GL_Enable(GLenum cap);
ANGLE_EXPORT void GL_APIENTRY GL_EnableVertexAttribArray(GLuint index);
ANGLE_EXPORT void GL_APIENTRY GL_Finish();
ANGLE_EXPORT void GL_APIENTRY GL_Flush();
ANGLE_EXPORT void GL_APIENTRY GL_FramebufferRenderbuffer(GLenum target,
                                                         GLenum attachment,
                                                         GLenum renderbuffertarget,
                                                         GLuint renderbuffer);
ANGLE_EXPORT void GL_APIENTRY GL_FramebufferTexture2D(GLenum target,
                                                      GLenum attachment,
                                                      GLenum textarget,
                                                      GLuint texture,
                                                      GLint level);
ANGLE_EXPORT void GL_APIENTRY GL_FrontFace(GLenum mode);
ANGLE_EXPORT void GL_APIENTRY GL_GenBuffers(GLsizei n, GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY GL_GenFramebuffers(GLsizei n, GLuint *framebuffers);
ANGLE_EXPORT void GL_APIENTRY GL_GenRenderbuffers(GLsizei n, GLuint *renderbuffers);
ANGLE_EXPORT void GL_APIENTRY GL_GenTextures(GLsizei n, GLuint *textures);
ANGLE_EXPORT void GL_APIENTRY GL_GenerateMipmap(GLenum target);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveAttrib(GLuint program,
                                                 GLuint index,
                                                 GLsizei bufSize,
                                                 GLsizei *length,
                                                 GLint *size,
                                                 GLenum *type,
                                                 GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveUniform(GLuint program,
                                                  GLuint index,
                                                  GLsizei bufSize,
                                                  GLsizei *length,
                                                  GLint *size,
                                                  GLenum *type,
                                                  GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetAttachedShaders(GLuint program,
                                                    GLsizei maxCount,
                                                    GLsizei *count,
                                                    GLuint *shaders);
ANGLE_EXPORT GLint GL_APIENTRY GL_GetAttribLocation(GLuint program, const GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetBooleanv(GLenum pname, GLboolean *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetBufferParameteriv(GLenum target, GLenum pname, GLint *params);
ANGLE_EXPORT GLenum GL_APIENTRY GL_GetError();
ANGLE_EXPORT void GL_APIENTRY GL_GetFloatv(GLenum pname, GLfloat *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetFramebufferAttachmentParameteriv(GLenum target,
                                                                     GLenum attachment,
                                                                     GLenum pname,
                                                                     GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetIntegerv(GLenum pname, GLint *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramInfoLog(GLuint program,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLchar *infoLog);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramiv(GLuint program, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetRenderbufferParameteriv(GLenum target,
                                                            GLenum pname,
                                                            GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetShaderInfoLog(GLuint shader,
                                                  GLsizei bufSize,
                                                  GLsizei *length,
                                                  GLchar *infoLog);
ANGLE_EXPORT void GL_APIENTRY GL_GetShaderPrecisionFormat(GLenum shadertype,
                                                          GLenum precisiontype,
                                                          GLint *range,
                                                          GLint *precision);
ANGLE_EXPORT void GL_APIENTRY GL_GetShaderSource(GLuint shader,
                                                 GLsizei bufSize,
                                                 GLsizei *length,
                                                 GLchar *source);
ANGLE_EXPORT void GL_APIENTRY GL_GetShaderiv(GLuint shader, GLenum pname, GLint *params);
ANGLE_EXPORT const GLubyte *GL_APIENTRY GL_GetString(GLenum name);
ANGLE_EXPORT void GL_APIENTRY GL_GetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTexParameteriv(GLenum target, GLenum pname, GLint *params);
ANGLE_EXPORT GLint GL_APIENTRY GL_GetUniformLocation(GLuint program, const GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetUniformfv(GLuint program, GLint location, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetUniformiv(GLuint program, GLint location, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexAttribPointerv(GLuint index,
                                                         GLenum pname,
                                                         void **pointer);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexAttribiv(GLuint index, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_Hint(GLenum target, GLenum mode);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsBuffer(GLuint buffer);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsEnabled(GLenum cap);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsFramebuffer(GLuint framebuffer);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsProgram(GLuint program);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsRenderbuffer(GLuint renderbuffer);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsShader(GLuint shader);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsTexture(GLuint texture);
ANGLE_EXPORT void GL_APIENTRY GL_LineWidth(GLfloat width);
ANGLE_EXPORT void GL_APIENTRY GL_LinkProgram(GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_PixelStorei(GLenum pname, GLint param);
ANGLE_EXPORT void GL_APIENTRY GL_PolygonOffset(GLfloat factor, GLfloat units);
ANGLE_EXPORT void GL_APIENTRY GL_ReadPixels(GLint x,
                                            GLint y,
                                            GLsizei width,
                                            GLsizei height,
                                            GLenum format,
                                            GLenum type,
                                            void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_ReleaseShaderCompiler();
ANGLE_EXPORT void GL_APIENTRY GL_RenderbufferStorage(GLenum target,
                                                     GLenum internalformat,
                                                     GLsizei width,
                                                     GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_SampleCoverage(GLfloat value, GLboolean invert);
ANGLE_EXPORT void GL_APIENTRY GL_Scissor(GLint x, GLint y, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_ShaderBinary(GLsizei count,
                                              const GLuint *shaders,
                                              GLenum binaryformat,
                                              const void *binary,
                                              GLsizei length);
ANGLE_EXPORT void GL_APIENTRY GL_ShaderSource(GLuint shader,
                                              GLsizei count,
                                              const GLchar *const *string,
                                              const GLint *length);
ANGLE_EXPORT void GL_APIENTRY GL_StencilFunc(GLenum func, GLint ref, GLuint mask);
ANGLE_EXPORT void GL_APIENTRY GL_StencilFuncSeparate(GLenum face,
                                                     GLenum func,
                                                     GLint ref,
                                                     GLuint mask);
ANGLE_EXPORT void GL_APIENTRY GL_StencilMask(GLuint mask);
ANGLE_EXPORT void GL_APIENTRY GL_StencilMaskSeparate(GLenum face, GLuint mask);
ANGLE_EXPORT void GL_APIENTRY GL_StencilOp(GLenum fail, GLenum zfail, GLenum zpass);
ANGLE_EXPORT void GL_APIENTRY GL_StencilOpSeparate(GLenum face,
                                                   GLenum sfail,
                                                   GLenum dpfail,
                                                   GLenum dppass);
ANGLE_EXPORT void GL_APIENTRY GL_TexImage2D(GLenum target,
                                            GLint level,
                                            GLint internalformat,
                                            GLsizei width,
                                            GLsizei height,
                                            GLint border,
                                            GLenum format,
                                            GLenum type,
                                            const void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_TexParameterf(GLenum target, GLenum pname, GLfloat param);
ANGLE_EXPORT void GL_APIENTRY GL_TexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_TexParameteri(GLenum target, GLenum pname, GLint param);
ANGLE_EXPORT void GL_APIENTRY GL_TexParameteriv(GLenum target, GLenum pname, const GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_TexSubImage2D(GLenum target,
                                               GLint level,
                                               GLint xoffset,
                                               GLint yoffset,
                                               GLsizei width,
                                               GLsizei height,
                                               GLenum format,
                                               GLenum type,
                                               const void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1f(GLint location, GLfloat v0);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1fv(GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1i(GLint location, GLint v0);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1iv(GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2f(GLint location, GLfloat v0, GLfloat v1);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2fv(GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2i(GLint location, GLint v0, GLint v1);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2iv(GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3fv(GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3i(GLint location, GLint v0, GLint v1, GLint v2);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3iv(GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY
GL_Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform4fv(GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform4iv(GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix2fv(GLint location,
                                                  GLsizei count,
                                                  GLboolean transpose,
                                                  const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix3fv(GLint location,
                                                  GLsizei count,
                                                  GLboolean transpose,
                                                  const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix4fv(GLint location,
                                                  GLsizei count,
                                                  GLboolean transpose,
                                                  const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_UseProgram(GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_ValidateProgram(GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib1f(GLuint index, GLfloat x);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib1fv(GLuint index, const GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib2fv(GLuint index, const GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib3fv(GLuint index, const GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY
GL_VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttrib4fv(GLuint index, const GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribPointer(GLuint index,
                                                     GLint size,
                                                     GLenum type,
                                                     GLboolean normalized,
                                                     GLsizei stride,
                                                     const void *pointer);
ANGLE_EXPORT void GL_APIENTRY GL_Viewport(GLint x, GLint y, GLsizei width, GLsizei height);
}  // extern "C"

#endif  // LIBGLESV2_ENTRY_POINTS_GLES_2_0_AUTOGEN_H_
