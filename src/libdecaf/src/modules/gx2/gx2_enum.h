#ifndef GX2_ENUM_H
#define GX2_ENUM_H

#include <common/enum_start.h>

ENUM_NAMESPACE_BEG(gx2)

ENUM_BEG(GX2AAMode, uint32_t)
   ENUM_VALUE(Mode1X,      0)
   ENUM_VALUE(Mode2X,      1)
   ENUM_VALUE(Mode4X,      2)
   ENUM_VALUE(Mode8X,      3)
ENUM_END(GX2AAMode)

ENUM_BEG(GX2AspectRatio, uint32_t)
   ENUM_VALUE(Normal,      0)
   ENUM_VALUE(Widescreen,  1)
ENUM_END(GX2AspectRatio)

ENUM_BEG(GX2AttribFormatType, uint32_t)
   ENUM_VALUE(TYPE_8,                  0x00)
   ENUM_VALUE(TYPE_4_4,                0x01)
   ENUM_VALUE(TYPE_16,                 0x02)
   ENUM_VALUE(TYPE_16_FLOAT,           0x03)
   ENUM_VALUE(TYPE_8_8,                0x04)
   ENUM_VALUE(TYPE_32,                 0x05)
   ENUM_VALUE(TYPE_32_FLOAT,           0x06)
   ENUM_VALUE(TYPE_16_16,              0x07)
   ENUM_VALUE(TYPE_16_16_FLOAT,        0x08)
   ENUM_VALUE(TYPE_10_11_11_FLOAT,     0x09)
   ENUM_VALUE(TYPE_8_8_8_8,            0x0A)
   ENUM_VALUE(TYPE_10_10_10_2,         0x0B)
   ENUM_VALUE(TYPE_32_32,              0x0C)
   ENUM_VALUE(TYPE_32_32_FLOAT,        0x0D)
   ENUM_VALUE(TYPE_16_16_16_16,        0x0E)
   ENUM_VALUE(TYPE_16_16_16_16_FLOAT,  0x0F)
   ENUM_VALUE(TYPE_32_32_32,           0x10)
   ENUM_VALUE(TYPE_32_32_32_FLOAT,     0x11)
   ENUM_VALUE(TYPE_32_32_32_32,        0x12)
   ENUM_VALUE(TYPE_32_32_32_32_FLOAT,  0x13)
ENUM_END(GX2AttribFormatType)

ENUM_BEG(GX2AttribFormatFlags, uint32_t)
   ENUM_VALUE(INTEGER,              0x100)
   ENUM_VALUE(SIGNED,               0x200)
   ENUM_VALUE(DEGAMMA,              0x400)
   ENUM_VALUE(SCALED,               0x800)
ENUM_END(GX2AttribFormatFlags)

ENUM_BEG(GX2AttribFormat, uint32_t)
   ENUM_VALUE(UNORM_8,              0x0)
   ENUM_VALUE(UNORM_8_8,            0x04)
   ENUM_VALUE(UNORM_8_8_8_8,        0x0a)

   ENUM_VALUE(UINT_8,               0x100)
   ENUM_VALUE(UINT_8_8,             0x104)
   ENUM_VALUE(UINT_8_8_8_8,         0x10a)

   ENUM_VALUE(SNORM_8,              0x200)
   ENUM_VALUE(SNORM_8_8,            0x204)
   ENUM_VALUE(SNORM_8_8_8_8,        0x20a)

   ENUM_VALUE(SINT_8,               0x300)
   ENUM_VALUE(SINT_8_8,             0x304)
   ENUM_VALUE(SINT_8_8_8_8,         0x30a)

   ENUM_VALUE(FLOAT_32,             0x806)
   ENUM_VALUE(FLOAT_32_32,          0x80d)
   ENUM_VALUE(FLOAT_32_32_32,       0x811)
   ENUM_VALUE(FLOAT_32_32_32_32,    0x813)
ENUM_END(GX2AttribFormat)

ENUM_BEG(GX2AttribIndexType, uint32_t)
   ENUM_VALUE(PerVertex,            0)
   ENUM_VALUE(PerInstance,          1)
ENUM_END(GX2AttribIndexType)

ENUM_BEG(GX2AlphaToMaskMode, uint32_t)
   ENUM_VALUE(NonDithered,          0)
   ENUM_VALUE(Dither0,              1)
   ENUM_VALUE(Dither90,             2)
   ENUM_VALUE(Dither180,            3)
   ENUM_VALUE(Dither270,            4)
ENUM_END(GX2AlphaToMaskMode)

ENUM_BEG(GX2BlendMode, uint32_t)
   ENUM_VALUE(Zero,                 0)
   ENUM_VALUE(One,                  1)
   ENUM_VALUE(SrcColor,             2)
   ENUM_VALUE(InvSrcColor,          3)
   ENUM_VALUE(SrcAlpha,             4)
   ENUM_VALUE(InvSrcAlpha,          5)
   ENUM_VALUE(DestAlpha,            6)
   ENUM_VALUE(InvDestAlpha,         7)
   ENUM_VALUE(DestColor,            8)
   ENUM_VALUE(InvDestColor,         9)
   ENUM_VALUE(SrcAlphaSat,          10)
   ENUM_VALUE(BothSrcAlpha,         11)
   ENUM_VALUE(BothInvSrcAlpha,      12)
   ENUM_VALUE(BlendFactor,          13)
   ENUM_VALUE(InvBlendFactor,       14)
   ENUM_VALUE(Src1Color,            15)
   ENUM_VALUE(InvSrc1Color,         16)
   ENUM_VALUE(Src1Alpha,            17)
   ENUM_VALUE(InvSrc1Alpha,         18)
ENUM_END(GX2BlendMode)

ENUM_BEG(GX2BlendCombineMode, uint32_t)
   ENUM_VALUE(Add,                  0)
   ENUM_VALUE(Subtract,             1)
   ENUM_VALUE(Min,                  2)
   ENUM_VALUE(Max,                  3)
   ENUM_VALUE(RevSubtract,          4)
ENUM_END(GX2BlendCombineMode)

ENUM_BEG(GX2BufferingMode, uint32_t)
   ENUM_VALUE(Single,               1)
   ENUM_VALUE(Double,               2)
   ENUM_VALUE(Triple,               3)
ENUM_END(GX2BufferingMode)

ENUM_BEG(GX2ChannelMask, uint32_t)
   ENUM_VALUE(R,                    1)
   ENUM_VALUE(G,                    2)
   ENUM_VALUE(RG,                   3)
   ENUM_VALUE(B,                    4)
   ENUM_VALUE(RB,                   5)
   ENUM_VALUE(GB,                   6)
   ENUM_VALUE(RGB,                  7)
   ENUM_VALUE(A,                    8)
   ENUM_VALUE(RA,                   9)
   ENUM_VALUE(GA,                   10)
   ENUM_VALUE(RGA,                  11)
   ENUM_VALUE(BA,                   12)
   ENUM_VALUE(RBA,                  13)
   ENUM_VALUE(GBA,                  14)
   ENUM_VALUE(RGBA,                 15)
ENUM_END(GX2ChannelMask)

ENUM_BEG(GX2CompareFunction, uint32_t)
   ENUM_VALUE(Never,                0)
   ENUM_VALUE(Less,                 1)
   ENUM_VALUE(Equal,                2)
   ENUM_VALUE(LessOrEqual,          3)
   ENUM_VALUE(Greater,              4)
   ENUM_VALUE(NotEqual,             5)
   ENUM_VALUE(GreaterOrEqual,       6)
   ENUM_VALUE(Always,               7)
ENUM_END(GX2CompareFunction)

ENUM_BEG(GX2Component, uint32_t)
   ENUM_VALUE(Mem0,                 0)
   ENUM_VALUE(Mem1,                 1)
   ENUM_VALUE(Mem2,                 2)
   ENUM_VALUE(Mem3,                 3)
   ENUM_VALUE(Zero,                 4)
   ENUM_VALUE(One,                  5)
ENUM_END(GX2Component)

ENUM_BEG(GX2ContextStateFlags, uint32_t)
   ENUM_VALUE(ProfileMode,          1 << 0)
   ENUM_VALUE(NoShadowDisplayList,  1 << 1)
ENUM_END(GX2ContextStateFlags)

ENUM_BEG(GX2ClearFlags, uint32_t)
   ENUM_VALUE(Depth,                1)
   ENUM_VALUE(Stencil,              2)
ENUM_END(GX2ClearFlags)

ENUM_BEG(GX2DrcRenderMode, uint32_t)
   ENUM_VALUE(Disabled,             0)
   ENUM_VALUE(Single,               1)
ENUM_END(GX2DrcRenderMode)

ENUM_BEG(GX2EndianSwapMode, uint32_t)
   ENUM_VALUE(None,                 0)
   ENUM_VALUE(Swap8In16,            1)
   ENUM_VALUE(Swap8In32,            2)
   ENUM_VALUE(Default,              3)
ENUM_END(GX2EndianSwapMode)

ENUM_BEG(GX2EventType, uint32_t)
   ENUM_VALUE(Vsync,                2)
   ENUM_VALUE(Flip,                 3)
   ENUM_VALUE(DisplayListOverrun,   4)
   ENUM_VALUE(Max,                  5)
ENUM_END(GX2EventType)

ENUM_BEG(GX2FetchShaderType, uint32_t)
   ENUM_VALUE(NoTessellation,       0)
   ENUM_VALUE(LineTessellation,     1)
   ENUM_VALUE(TriangleTessellation, 2)
   ENUM_VALUE(QuadTessellation,     3)
ENUM_END(GX2FetchShaderType)

ENUM_BEG(GX2FrontFace, uint32_t)
   ENUM_VALUE(CounterClockwise,     0)
   ENUM_VALUE(Clockwise,            1)
ENUM_END(GX2FrontFace)

ENUM_BEG(GX2InitAttrib, uint32_t)
   ENUM_VALUE(End,                     0)
   ENUM_VALUE(CommandBufferPoolBase,   1)
   ENUM_VALUE(CommandBufferPoolSize,   2)
   ENUM_VALUE(ArgC,                    7)
   ENUM_VALUE(ArgV,                    8)
ENUM_END(GX2InitAttrib)

ENUM_BEG(GX2IndexType, uint32_t)
   ENUM_VALUE(U16_LE,               0x0)
   ENUM_VALUE(U32_LE,               0x1)
   ENUM_VALUE(U16,                  0x4)
   ENUM_VALUE(U32,                  0x9)
ENUM_END(GX2IndexType)

ENUM_BEG(GX2InvalidateMode, uint32_t)
   ENUM_VALUE(AttributeBuffer,      1 << 0)
   ENUM_VALUE(Texture,              1 << 1)
   ENUM_VALUE(UniformBlock,         1 << 2)
   ENUM_VALUE(Shader,               1 << 3)
   ENUM_VALUE(ColorBuffer,          1 << 4)
   ENUM_VALUE(DepthBuffer,          1 << 5)
   ENUM_VALUE(CPU,                  1 << 6)
   ENUM_VALUE(StreamOutBuffer,      1 << 7)
   ENUM_VALUE(ExportBuffer,         1 << 8)
ENUM_END(GX2InvalidateMode)

ENUM_BEG(GX2LogicOp, uint32_t)
   ENUM_VALUE(Clear,                0x00)
   ENUM_VALUE(Nor,                  0x11)
   ENUM_VALUE(InvertedAnd,          0x22)
   ENUM_VALUE(InvertedCopy,         0x33)
   ENUM_VALUE(ReverseAnd,           0x44)
   ENUM_VALUE(Invert,               0x55)
   ENUM_VALUE(Xor,                  0x66)
   ENUM_VALUE(NotAnd,               0x77)
   ENUM_VALUE(And,                  0x88)
   ENUM_VALUE(Equiv,                0x99)
   ENUM_VALUE(NoOp,                 0xAA)
   ENUM_VALUE(InvertedOr,           0xBB)
   ENUM_VALUE(Copy,                 0xCC)
   ENUM_VALUE(ReverseOr,            0xDD)
   ENUM_VALUE(Or,                   0xEE)
   ENUM_VALUE(Set,                  0xFF)
ENUM_END(GX2LogicOp)

ENUM_BEG(GX2PatchShaderType, uint32_t)
   ENUM_VALUE(FetchShader,          0x1)
   ENUM_VALUE(VertexShader,         0x2)
   ENUM_VALUE(GeometryVertexShader, 0x3)
   ENUM_VALUE(GeometryShader,       0x4)
   ENUM_VALUE(PixelShader,          0x5)
ENUM_END(GX2PatchShaderType)

ENUM_BEG(GX2PrimitiveMode, uint32_t)
   ENUM_VALUE(Triangles,            0x4)
   ENUM_VALUE(TriangleStrip,        0x6)
   ENUM_VALUE(Quads,                0x13)
   ENUM_VALUE(QuadStrip,            0x14)
ENUM_END(GX2PrimitiveMode)

ENUM_BEG(GX2PolygonMode, uint32_t)
   ENUM_VALUE(Point,                0)
   ENUM_VALUE(Line,                 1)
   ENUM_VALUE(Triangle,             2)
ENUM_END(GX2PolygonMode)

ENUM_BEG(GX2QueryType, uint32_t)
   ENUM_VALUE(OcclusionQuery,       0)
   ENUM_VALUE(StreamOutStats,       1)
   ENUM_VALUE(OcclusionQueryGpuMem, 2)
   ENUM_VALUE(StreamOutStatsGpuMem, 3)
ENUM_END(GX2QueryType)

ENUM_BEG(GX2RenderTarget, uint32_t)
   ENUM_VALUE(Target0,              0)
   ENUM_VALUE(Target1,              1)
   ENUM_VALUE(Target2,              2)
   ENUM_VALUE(Target3,              3)
   ENUM_VALUE(Target4,              4)
   ENUM_VALUE(Target5,              5)
   ENUM_VALUE(Target6,              6)
   ENUM_VALUE(Target7,              7)
ENUM_END(GX2RenderTarget)

ENUM_BEG(GX2RResourceFlags, uint32_t)
   ENUM_VALUE(BindTexture,          1 << 0)
   ENUM_VALUE(BindColorBuffer,      1 << 1)
   ENUM_VALUE(BindDepthBuffer,      1 << 2)
   ENUM_VALUE(BindScanBuffer,       1 << 3)
   ENUM_VALUE(BindVertexBuffer,     1 << 4)
   ENUM_VALUE(BindIndexBuffer,      1 << 5)
   ENUM_VALUE(BindUniformBlock,     1 << 6)
   ENUM_VALUE(BindShaderProgram,    1 << 7)
   ENUM_VALUE(BindStreamOutput,     1 << 8)
   ENUM_VALUE(BindDisplayList,      1 << 9)
   ENUM_VALUE(BindGSRing,           1 << 10)
   ENUM_VALUE(UsageCpuRead,         1 << 11)
   ENUM_VALUE(UsageCpuWrite,        1 << 12)
   ENUM_VALUE(UsageCpuReadWrite,    UsageCpuRead | UsageCpuWrite)
   ENUM_VALUE(UsageGpuRead,         1 << 13)
   ENUM_VALUE(UsageGpuWrite,        1 << 14)
   ENUM_VALUE(UsageGpuReadWrite,    UsageGpuRead | UsageGpuWrite)
   ENUM_VALUE(UsageDmaRead,         1 << 15)
   ENUM_VALUE(UsageDmaWrite,        1 << 16)
   ENUM_VALUE(UsageForceMEM1,       1 << 17)
   ENUM_VALUE(UsageForceMEM2,       1 << 18)
   ENUM_VALUE(DisableCpuInvalidate, 1 << 20)
   ENUM_VALUE(DisableGpuInvalidate, 1 << 21)
   ENUM_VALUE(LockedReadOnly,       1 << 22)
   ENUM_VALUE(UserMemory,           1 << 29)
   ENUM_VALUE(Locked,               1 << 30)
ENUM_END(GX2RResourceFlags)

ENUM_BEG(GX2RoundingMode, uint32_t)
   ENUM_VALUE(RoundToEven,          0)
   ENUM_VALUE(Truncate,             1)
ENUM_END(GX2RoundingMode)

ENUM_BEG(GX2ScanTarget, uint32_t)
   ENUM_VALUE(TV,                   1)
   ENUM_VALUE(DRC,                  4)
ENUM_END(GX2ScanTarget)

ENUM_BEG(GX2StreamOutContextMode, uint32_t)
   ENUM_VALUE(Append,               0)
   ENUM_VALUE(FromStart,            1)
   ENUM_VALUE(FromOffset,           2)
ENUM_END(GX2StreamOutContextMode)

ENUM_BEG(GX2SurfaceDim, uint32_t)
   ENUM_VALUE(Texture1D,            0)
   ENUM_VALUE(Texture2D,            1)
   ENUM_VALUE(Texture3D,            2)
   ENUM_VALUE(TextureCube,          3)
   ENUM_VALUE(Texture1DArray,       4)
   ENUM_VALUE(Texture2DArray,       5)
   ENUM_VALUE(Texture2DMSAA,        6)
   ENUM_VALUE(Texture2DMSAAArray,   7)
ENUM_END(GX2SurfaceDim)

ENUM_BEG(GX2SurfaceFormat, uint32_t)
   ENUM_VALUE(INVALID,                    0x00)
   ENUM_VALUE(UNORM_R4_G4,                0x02)
   ENUM_VALUE(UNORM_R4_G4_B4_A4,          0x0b)
   ENUM_VALUE(UNORM_R8,                   0x01)
   ENUM_VALUE(UNORM_R8_G8,                0x07)
   ENUM_VALUE(UNORM_R8_G8_B8_A8,          0x01a)
   ENUM_VALUE(UNORM_R16,                  0x05)
   ENUM_VALUE(UNORM_R16_G16,              0x0f)
   ENUM_VALUE(UNORM_R16_G16_B16_A16,      0x01f)
   ENUM_VALUE(UNORM_R5_G6_B5,             0x08)
   ENUM_VALUE(UNORM_R5_G5_B5_A1,          0x0a)
   ENUM_VALUE(UNORM_A1_B5_G5_R5,          0x0c)
   ENUM_VALUE(UNORM_R24_X8,               0x011)
   ENUM_VALUE(UNORM_A2_B10_G10_R10,       0x01b)
   ENUM_VALUE(UNORM_R10_G10_B10_A2,       0x019)
   ENUM_VALUE(UNORM_BC1,                  0x031)
   ENUM_VALUE(UNORM_BC2,                  0x032)
   ENUM_VALUE(UNORM_BC3,                  0x033)
   ENUM_VALUE(UNORM_BC4,                  0x034)
   ENUM_VALUE(UNORM_BC5,                  0x035)
   ENUM_VALUE(UNORM_NV12,                 0x081)

   ENUM_VALUE(UINT_R8,                    0x101)
   ENUM_VALUE(UINT_R8_G8,                 0x107)
   ENUM_VALUE(UINT_R8_G8_B8_A8,           0x11a)
   ENUM_VALUE(UINT_R16,                   0x105)
   ENUM_VALUE(UINT_R16_G16,               0x10f)
   ENUM_VALUE(UINT_R16_G16_B16_A16,       0x11f)
   ENUM_VALUE(UINT_R32,                   0x10d)
   ENUM_VALUE(UINT_R32_G32,               0x11d)
   ENUM_VALUE(UINT_R32_G32_B32_A32,       0x122)
   ENUM_VALUE(UINT_A2_B10_G10_R10,        0x11b)
   ENUM_VALUE(UINT_R10_G10_B10_A2,        0x119)
   ENUM_VALUE(UINT_X24_G8,                0x111)
   ENUM_VALUE(UINT_G8_X24,                0x11c)

   ENUM_VALUE(SNORM_R8,                   0x201)
   ENUM_VALUE(SNORM_R8_G8,                0x207)
   ENUM_VALUE(SNORM_R8_G8_B8_A8,          0x21a)
   ENUM_VALUE(SNORM_R16,                  0x205)
   ENUM_VALUE(SNORM_R16_G16,              0x20f)
   ENUM_VALUE(SNORM_R16_G16_B16_A16,      0x21f)
   ENUM_VALUE(SNORM_R10_G10_B10_A2,       0x219)
   ENUM_VALUE(SNORM_BC4,                  0x234)
   ENUM_VALUE(SNORM_BC5,                  0x235)

   ENUM_VALUE(SINT_R8,                    0x301)
   ENUM_VALUE(SINT_R8_G8,                 0x307)
   ENUM_VALUE(SINT_R8_G8_B8_A8,           0x31a)
   ENUM_VALUE(SINT_R16,                   0x305)
   ENUM_VALUE(SINT_R16_G16,               0x30f)
   ENUM_VALUE(SINT_R16_G16_B16_A16,       0x31f)
   ENUM_VALUE(SINT_R32,                   0x30d)
   ENUM_VALUE(SINT_R32_G32,               0x31d)
   ENUM_VALUE(SINT_R32_G32_B32_A32,       0x322)
   ENUM_VALUE(SINT_R10_G10_B10_A2,        0x319)

   ENUM_VALUE(SRGB_R8_G8_B8_A8,           0x41a)
   ENUM_VALUE(SRGB_BC1,                   0x431)
   ENUM_VALUE(SRGB_BC2,                   0x432)
   ENUM_VALUE(SRGB_BC3,                   0x433)

   ENUM_VALUE(FLOAT_R32,                  0x80e)
   ENUM_VALUE(FLOAT_R32_G32,              0x81e)
   ENUM_VALUE(FLOAT_R32_G32_B32_A32,      0x823)
   ENUM_VALUE(FLOAT_R16,                  0x806)
   ENUM_VALUE(FLOAT_R16_G16,              0x810)
   ENUM_VALUE(FLOAT_R16_G16_B16_A16,      0x820)
   ENUM_VALUE(FLOAT_R11_G11_B10,          0x816)
   ENUM_VALUE(FLOAT_D24_S8,               0x811)
   ENUM_VALUE(FLOAT_X8_X24,               0x81c)
ENUM_END(GX2SurfaceFormat)

ENUM_BEG(GX2SurfaceFormatType, uint32_t)
   ENUM_VALUE(UNORM,             0x0)
   ENUM_VALUE(UINT,              0x1)
   ENUM_VALUE(SNORM,             0x2)
   ENUM_VALUE(SINT,              0x3)
   ENUM_VALUE(SRGB,              0x4)
   ENUM_VALUE(FLOAT,             0x8)
ENUM_END(GX2SurfaceFormatType)

ENUM_BEG(GX2SurfaceUse, uint32_t)
   ENUM_VALUE(Texture,           1 << 0)
   ENUM_VALUE(ColorBuffer,       1 << 1)
   ENUM_VALUE(DepthBuffer,       1 << 2)
   ENUM_VALUE(ScanBuffer,        1 << 3)
ENUM_END(GX2SurfaceUse)

ENUM_BEG(GX2StencilFunction, uint32_t)
   ENUM_VALUE(Keep,              0)
   ENUM_VALUE(Zero,              1)
   ENUM_VALUE(Replace,           2)
   ENUM_VALUE(IncrClamp,         3)
   ENUM_VALUE(DecrClamp,         4)
   ENUM_VALUE(Invert,            5)
   ENUM_VALUE(IncrWrap,          6)
   ENUM_VALUE(DecrWrap,          7)
ENUM_END(GX2StencilFunction)

ENUM_BEG(GX2TessellationMode, uint32_t)
   ENUM_VALUE(Discrete,          0)
   ENUM_VALUE(Continuous,        1)
   ENUM_VALUE(Adaptive,          2)
ENUM_END(GX2TessellationMode)

ENUM_BEG(GX2TexBorderType, uint32_t)
   ENUM_VALUE(TransparentBlack,  0)
   ENUM_VALUE(Black,             1)
   ENUM_VALUE(White,             2)
   ENUM_VALUE(Variable,          3)
ENUM_END(GX2TexBorderType)

ENUM_BEG(GX2TexClampMode, uint32_t)
   ENUM_VALUE(Wrap,              0)
   ENUM_VALUE(Mirror,            1)
   ENUM_VALUE(Clamp,             2)
   ENUM_VALUE(MirrorOnce,        3)
   ENUM_VALUE(ClampBorder,       6)
ENUM_END(GX2TexClampMode)

ENUM_BEG(GX2TexMipFilterMode, uint32_t)
   ENUM_VALUE(None,              0)
   ENUM_VALUE(Point,             1)
   ENUM_VALUE(Linear,            2)
ENUM_END(GX2TexMipFilterMode)

ENUM_BEG(GX2TexMipPerfMode, uint32_t)
   ENUM_VALUE(Disable,           0)
ENUM_END(GX2TexMipPerfMode)

ENUM_BEG(GX2TexXYFilterMode, uint32_t)
   ENUM_VALUE(Point,             0)
   ENUM_VALUE(Linear,            1)
ENUM_END(GX2TexXYFilterMode)

ENUM_BEG(GX2TexAnisoRatio, uint32_t)
   ENUM_VALUE(None,              0)
ENUM_END(GX2TexAnisoRatio)

ENUM_BEG(GX2TexZFilterMode, uint32_t)
   ENUM_VALUE(None,              0)
   ENUM_VALUE(Point,             1)
   ENUM_VALUE(Linear,            2)
ENUM_END(GX2TexZFilterMode)

ENUM_BEG(GX2TexZPerfMode, uint32_t)
   ENUM_VALUE(Disabled,          0)
ENUM_END(GX2TexZPerfMode)

ENUM_BEG(GX2TileMode, uint32_t)
   ENUM_VALUE(Default,           0)
   ENUM_VALUE(LinearAligned,     1)
   ENUM_VALUE(Tiled1DThin1,      2)
   ENUM_VALUE(Tiled1DThick,      3)
   ENUM_VALUE(Tiled2DThin1,      4)
   ENUM_VALUE(Tiled2DThin2,      5)
   ENUM_VALUE(Tiled2DThin4,      6)
   ENUM_VALUE(Tiled2DThick,      7)
   ENUM_VALUE(Tiled2BThin1,      8)
   ENUM_VALUE(Tiled2BThin2,      9)
   ENUM_VALUE(Tiled2BThin4,      10)
   ENUM_VALUE(Tiled2BThick,      11)
   ENUM_VALUE(Tiled3DThin1,      12)
   ENUM_VALUE(Tiled3DThick,      13)
   ENUM_VALUE(Tiled3BThin1,      14)
   ENUM_VALUE(Tiled3BThick,      15)
   ENUM_VALUE(LinearSpecial,     16)
ENUM_END(GX2TileMode)

ENUM_BEG(GX2TVRenderMode, uint32_t)
   ENUM_VALUE(Standard480p,      1)
   ENUM_VALUE(Wide480p,          2)
   ENUM_VALUE(Wide720p,          3)
   ENUM_VALUE(Wide1080p,         5)
ENUM_END(GX2TVRenderMode)

ENUM_BEG(GX2TVScanMode, uint32_t)
   ENUM_VALUE(None,              0)
   ENUM_VALUE(I480,              1)
   ENUM_VALUE(P480,              2)
   ENUM_VALUE(P720,              3)
   ENUM_VALUE(I1080,             5)
   ENUM_VALUE(P1080,             6)
ENUM_END(GX2TVScanMode)

ENUM_BEG(GX2SamplerVarType, uint32_t)
   ENUM_VALUE(Sampler1D,         0)
   ENUM_VALUE(Sampler2D,         1)
   ENUM_VALUE(Sampler3D,         3)
   ENUM_VALUE(SamplerCube,       4)
ENUM_END(GX2SamplerVarType)

ENUM_BEG(GX2ShaderMode, uint32_t)
   ENUM_VALUE(UniformRegister,   0)
   ENUM_VALUE(UniformBlock,      1)
   ENUM_VALUE(GeometryShader,    2)
   ENUM_VALUE(ComputeShader,     3)
ENUM_END(GX2ShaderMode)

ENUM_BEG(GX2ShaderVarType, uint32_t)
   ENUM_VALUE(Int,               2)
   ENUM_VALUE(Float,             4)
   ENUM_VALUE(Float2,            9)
   ENUM_VALUE(Float3,            10)
   ENUM_VALUE(Float4,            11)
   ENUM_VALUE(Int2,              15)
   ENUM_VALUE(Int3,              16)
   ENUM_VALUE(Int4,              17)
   ENUM_VALUE(Matrix4x4,         29)
ENUM_END(GX2ShaderVarType)

ENUM_NAMESPACE_END(gx2)

#include <common/enum_end.h>

#endif // ifdef GX2_ENUM_H
