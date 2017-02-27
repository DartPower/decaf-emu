#ifndef LATTE_ENUM_SQ_H
#define LATTE_ENUM_SQ_H

#include <common/enum_start.h>

ENUM_NAMESPACE_BEG(latte)

ENUM_BEG(SQ_ALU_ENCODING, uint32_t)
   ENUM_VALUE(OP2,                        0)
   ENUM_VALUE(OP3,                        1)
ENUM_END(SQ_ALU_ENCODING)

ENUM_BEG(SQ_ALU_EXECUTE_MASK_OP, uint32_t)
   ENUM_VALUE(DEACTIVATE,                 0)
   ENUM_VALUE(BREAK,                      1)
   ENUM_VALUE(CONTINUE,                   2)
   ENUM_VALUE(KILL,                       3)
ENUM_END(SQ_ALU_EXECUTE_MASK_OP)

ENUM_BEG(SQ_ALU_OMOD, uint32_t)
   ENUM_VALUE(OFF,                        0)
   ENUM_VALUE(M2,                         1)
   ENUM_VALUE(M4,                         2)
   ENUM_VALUE(D2,                         3)
ENUM_END(SQ_ALU_OMOD)

ENUM_BEG(SQ_ALU_SRC, uint32_t)
   ENUM_VALUE(REGISTER_FIRST,             0)
   ENUM_VALUE(REGISTER_LAST,              127)
   ENUM_VALUE(KCACHE_BANK0_FIRST,         128)
   ENUM_VALUE(KCACHE_BANK0_LAST,          159)
   ENUM_VALUE(KCACHE_BANK1_FIRST,         160)
   ENUM_VALUE(KCACHE_BANK1_LAST,          191)
   ENUM_VALUE(LDS_OQ_A,                   219)
   ENUM_VALUE(LDS_OQ_B,                   220)
   ENUM_VALUE(LDS_OQ_A_POP,               221)
   ENUM_VALUE(LDS_OQ_B_POP,               222)
   ENUM_VALUE(LDS_DIRECT_A,               223)
   ENUM_VALUE(LDS_DIRECT_B,               224)
   ENUM_VALUE(TIME_HI,                    227)
   ENUM_VALUE(TIME_LO,                    228)
   ENUM_VALUE(MASK_HI,                    229)
   ENUM_VALUE(MASK_LO,                    230)
   ENUM_VALUE(HW_WAVE_ID,                 231)
   ENUM_VALUE(SIMD_ID,                    232)
   ENUM_VALUE(SE_ID,                      233)
   ENUM_VALUE(HW_THREADGRP_ID,            234)
   ENUM_VALUE(WAVE_ID_IN_GRP,             235)
   ENUM_VALUE(NUM_THREADGRP_WAVES,        236)
   ENUM_VALUE(HW_ALU_ODD,                 237)
   ENUM_VALUE(LOOP_IDX,                   238)
   ENUM_VALUE(PARAM_BASE_ADDR,            240)
   ENUM_VALUE(NEW_PRIM_MASK,              241)
   ENUM_VALUE(PRIM_MASK_HI,               242)
   ENUM_VALUE(PRIM_MASK_LO,               243)
   ENUM_VALUE(IMM_1_DBL_L,                244)
   ENUM_VALUE(IMM_1_DBL_M,                245)
   ENUM_VALUE(IMM_0_5_DBL_L,              246)
   ENUM_VALUE(IMM_0_5_DBL_M,              247)
   ENUM_VALUE(IMM_0,                      248)
   ENUM_VALUE(IMM_1,                      249)
   ENUM_VALUE(IMM_1_INT,                  250)
   ENUM_VALUE(IMM_M_1_INT,                251)
   ENUM_VALUE(IMM_0_5,                    252)
   ENUM_VALUE(LITERAL,                    253)
   ENUM_VALUE(PV,                         254)
   ENUM_VALUE(PS,                         255)
   ENUM_VALUE(CONST_FILE_FIRST,           256)
   ENUM_VALUE(CONST_FILE_LAST,            511)
ENUM_END(SQ_ALU_SRC)

ENUM_BEG(SQ_ALU_VEC_BANK_SWIZZLE, uint32_t)
   ENUM_VALUE(VEC_012,                    0)
   ENUM_VALUE(VEC_021,                    1)
   ENUM_VALUE(VEC_120,                    2)
   ENUM_VALUE(VEC_102,                    3)
   ENUM_VALUE(VEC_201,                    4)
   ENUM_VALUE(VEC_210,                    5)
ENUM_END(SQ_ALU_VEC_BANK_SWIZZLE)

ENUM_BEG(SQ_ALU_SCL_BANK_SWIZZLE, uint32_t)
   ENUM_VALUE(SCL_210,                    0)
   ENUM_VALUE(SCL_122,                    1)
   ENUM_VALUE(SCL_212,                    2)
   ENUM_VALUE(SCL_221,                    3)
ENUM_END(SQ_ALU_SCL_BANK_SWIZZLE)

ENUM_BEG(SQ_CF_COND, uint32_t)
   ENUM_VALUE(ACTIVE,                     0)
   ENUM_VALUE(ALWAYS_FALSE,               1)
   ENUM_VALUE(CF_BOOL,                    2)
   ENUM_VALUE(CF_NOT_BOOL,                3)
ENUM_END(SQ_CF_COND)

ENUM_BEG(SQ_DATA_FORMAT, uint32_t)
   ENUM_VALUE(FMT_INVALID,                0)
   ENUM_VALUE(FMT_8,                      1)
   ENUM_VALUE(FMT_4_4,                    2)
   ENUM_VALUE(FMT_3_3_2,                  3)
   ENUM_VALUE(FMT_16,                     5)
   ENUM_VALUE(FMT_16_FLOAT,               6)
   ENUM_VALUE(FMT_8_8,                    7)
   ENUM_VALUE(FMT_5_6_5,                  8)
   ENUM_VALUE(FMT_6_5_5,                  9)
   ENUM_VALUE(FMT_1_5_5_5,                10)
   ENUM_VALUE(FMT_4_4_4_4,                11)
   ENUM_VALUE(FMT_5_5_5_1,                12)
   ENUM_VALUE(FMT_32,                     13)
   ENUM_VALUE(FMT_32_FLOAT,               14)
   ENUM_VALUE(FMT_16_16,                  15)
   ENUM_VALUE(FMT_16_16_FLOAT,            16)
   ENUM_VALUE(FMT_8_24,                   17)
   ENUM_VALUE(FMT_8_24_FLOAT,             18)
   ENUM_VALUE(FMT_24_8,                   19)
   ENUM_VALUE(FMT_24_8_FLOAT,             20)
   ENUM_VALUE(FMT_10_11_11,               21)
   ENUM_VALUE(FMT_10_11_11_FLOAT,         22)
   ENUM_VALUE(FMT_11_11_10,               23)
   ENUM_VALUE(FMT_11_11_10_FLOAT,         24)
   ENUM_VALUE(FMT_2_10_10_10,             25)
   ENUM_VALUE(FMT_8_8_8_8,                26)
   ENUM_VALUE(FMT_10_10_10_2,             27)
   ENUM_VALUE(FMT_X24_8_32_FLOAT,         28)
   ENUM_VALUE(FMT_32_32,                  29)
   ENUM_VALUE(FMT_32_32_FLOAT,            30)
   ENUM_VALUE(FMT_16_16_16_16,            31)
   ENUM_VALUE(FMT_16_16_16_16_FLOAT,      32)
   ENUM_VALUE(FMT_32_32_32_32,            34)
   ENUM_VALUE(FMT_32_32_32_32_FLOAT,      35)
   ENUM_VALUE(FMT_1,                      37)
   ENUM_VALUE(FMT_GB_GR,                  39)
   ENUM_VALUE(FMT_BG_RG,                  40)
   ENUM_VALUE(FMT_32_AS_8,                41)
   ENUM_VALUE(FMT_32_AS_8_8,              42)
   ENUM_VALUE(FMT_5_9_9_9_SHAREDEXP,      43)
   ENUM_VALUE(FMT_8_8_8,                  44)
   ENUM_VALUE(FMT_16_16_16,               45)
   ENUM_VALUE(FMT_16_16_16_FLOAT,         46)
   ENUM_VALUE(FMT_32_32_32,               47)
   ENUM_VALUE(FMT_32_32_32_FLOAT,         48)
   ENUM_VALUE(FMT_BC1,                    49)
   ENUM_VALUE(FMT_BC2,                    50)
   ENUM_VALUE(FMT_BC3,                    51)
   ENUM_VALUE(FMT_BC4,                    52)
   ENUM_VALUE(FMT_BC5,                    53)
   ENUM_VALUE(FMT_APC0,                   54)
   ENUM_VALUE(FMT_APC1,                   55)
   ENUM_VALUE(FMT_APC2,                   56)
   ENUM_VALUE(FMT_APC3,                   57)
   ENUM_VALUE(FMT_APC4,                   58)
   ENUM_VALUE(FMT_APC5,                   59)
   ENUM_VALUE(FMT_APC6,                   60)
   ENUM_VALUE(FMT_APC7,                   61)
   ENUM_VALUE(FMT_CTX1,                   62)
   ENUM_VALUE(FMT_MASK,                   0x3F)
ENUM_END(SQ_DATA_FORMAT)

ENUM_BEG(SQ_EXPORT_TYPE, uint32_t)
   ENUM_VALUE(PIXEL,                      0)
   ENUM_VALUE(POS,                        1)
   ENUM_VALUE(PARAM,                      2)
ENUM_END(SQ_EXPORT_TYPE)

ENUM_BEG(SQ_MEM_EXPORT_TYPE, uint32_t)
   ENUM_VALUE(WRITE,                      0)
   ENUM_VALUE(WRITE_IND,                  1)
   ENUM_VALUE(READ,                       2)
   ENUM_VALUE(READ_IND,                   3)
ENUM_END(SQ_MEM_EXPORT_TYPE)

ENUM_BEG(SQ_CF_KCACHE_MODE, uint32_t)
   ENUM_VALUE(NOP,                        0)
   ENUM_VALUE(LOCK_1,                     1)
   ENUM_VALUE(LOCK_2,                     2)
   ENUM_VALUE(LOCK_LOOP_INDEX,            3)
ENUM_END(SQ_CF_KCACHE_MODE)

ENUM_BEG(SQ_CHAN, uint32_t)
   ENUM_VALUE(X,                          0)
   ENUM_VALUE(Y,                          1)
   ENUM_VALUE(Z,                          2)
   ENUM_VALUE(W,                          3)
   ENUM_VALUE(T,                          4)
ENUM_END(SQ_CHAN)

ENUM_BEG(SQ_ENDIAN, uint32_t)
   ENUM_VALUE(NONE,                       0)
   ENUM_VALUE(SWAP_8IN16,                 1)
   ENUM_VALUE(SWAP_8IN32,                 2)
   ENUM_VALUE(AUTO,                       3)
ENUM_END(SQ_ENDIAN)

ENUM_BEG(SQ_FORMAT_COMP, uint32_t)
   ENUM_VALUE(UNSIGNED,                   0)
   ENUM_VALUE(SIGNED,                     1)
ENUM_END(SQ_FORMAT_COMP)

ENUM_BEG(SQ_INDEX_MODE, uint32_t)
   ENUM_VALUE(AR_X,                       0)
   ENUM_VALUE(AR_Y,                       1)
   ENUM_VALUE(AR_Z,                       2)
   ENUM_VALUE(AR_W,                       3)
   ENUM_VALUE(LOOP,                       4)
ENUM_END(SQ_INDEX_MODE)

ENUM_BEG(SQ_NUM_FORMAT, uint32_t)
   ENUM_VALUE(NORM,                       0)
   ENUM_VALUE(INT,                        1)
   ENUM_VALUE(SCALED,                     2)
ENUM_END(SQ_NUM_FORMAT)

ENUM_BEG(SQ_PRED_SEL, uint32_t)
   ENUM_VALUE(OFF,                        0)
   ENUM_VALUE(ZERO,                       2)
   ENUM_VALUE(ONE,                        3)
ENUM_END(SQ_PRED_SEL)

ENUM_BEG(SQ_SRF_MODE, uint32_t)
   ENUM_VALUE(ZERO_CLAMP_MINUS_ONE,       0)
   ENUM_VALUE(NO_ZERO,                    1)
ENUM_END(SQ_SRF_MODE)

ENUM_BEG(SQ_REL, uint32_t)
   ENUM_VALUE(ABS,                        0)
   ENUM_VALUE(REL,                        1)
ENUM_END(SQ_REL)

ENUM_BEG(SQ_RES_OFFSET, uint32_t)
   ENUM_VALUE(PS_TEX_RESOURCE_0,          0x0)
   ENUM_VALUE(PS_BUF_RESOURCE_0,          0xA0)

   ENUM_VALUE(VS_TEX_RESOURCE_0,          0xA0)
   ENUM_VALUE(VS_BUF_RESOURCE_0,          0x120)
   ENUM_VALUE(VS_GSOUT_RESOURCE,          0x13F)
   ENUM_VALUE(VS_ATTRIB_RESOURCE_0,       0x140)

   ENUM_VALUE(GS_TEX_RESOURCE_0,          0x150)
   ENUM_VALUE(GS_BUF_RESOURCE_0,          0x1D0)
   ENUM_VALUE(GS_GSIN_RESOURCE,           0x1EF)
ENUM_END(SQ_RES_OFFSET)

ENUM_BEG(SQ_SEL, uint32_t)
   ENUM_VALUE(SEL_X,                      0)
   ENUM_VALUE(SEL_Y,                      1)
   ENUM_VALUE(SEL_Z,                      2)
   ENUM_VALUE(SEL_W,                      3)
   ENUM_VALUE(SEL_0,                      4)
   ENUM_VALUE(SEL_1,                      5)
   ENUM_VALUE(SEL_MASK,                   7)
ENUM_END(SQ_SEL)

ENUM_BEG(SQ_TEX_COORD_TYPE, uint32_t)
   ENUM_VALUE(UNNORMALIZED,               0)
   ENUM_VALUE(NORMALIZED,                 1)
ENUM_END(SQ_TEX_COORD_TYPE)

ENUM_BEG(SQ_TEX_DIM, uint32_t)
   ENUM_VALUE(DIM_1D,                     0)
   ENUM_VALUE(DIM_2D,                     1)
   ENUM_VALUE(DIM_3D,                     2)
   ENUM_VALUE(DIM_CUBEMAP,                3)
   ENUM_VALUE(DIM_1D_ARRAY,               4)
   ENUM_VALUE(DIM_2D_ARRAY,               5)
   ENUM_VALUE(DIM_2D_MSAA,                6)
   ENUM_VALUE(DIM_2D_ARRAY_MSAA,          7)
ENUM_END(SQ_TEX_DIM)

ENUM_BEG(SQ_TEX_VTX_TYPE, uint32_t)
   ENUM_VALUE(INVALID_TEXTURE,            0)
   ENUM_VALUE(INVALID_BUFFER,             1)
   ENUM_VALUE(VALID_TEXTURE,              2)
   ENUM_VALUE(VALID_BUFFER,               3)
ENUM_END(SQ_TEX_VTX_TYPE)

ENUM_BEG(SQ_TILE_MODE, uint32_t)
   ENUM_VALUE(DEFAULT,                    0)
   ENUM_VALUE(LINEAR_ALIGNED,             1)
   ENUM_VALUE(TILED_1D_THIN1,             2)
   ENUM_VALUE(TILED_1D_THICK,             3)
   ENUM_VALUE(TILED_2D_THIN1,             4)
   ENUM_VALUE(TILED_2D_THIN2,             5)
   ENUM_VALUE(TILED_2D_THIN4,             6)
   ENUM_VALUE(TILED_2D_THICK,             7)
   ENUM_VALUE(TILED_2B_THIN1,             8)
   ENUM_VALUE(TILED_2B_THIN2,             9)
   ENUM_VALUE(TILED_2B_THIN4,             10)
   ENUM_VALUE(TILED_2B_THICK,             11)
   ENUM_VALUE(TILED_3D_THIN1,             12)
   ENUM_VALUE(TILED_3D_THICK,             13)
   ENUM_VALUE(TILED_3B_THIN1,             14)
   ENUM_VALUE(TILED_3B_THICK,             15)
ENUM_END(SQ_TILE_MODE)

ENUM_BEG(SQ_VTX_CLAMP, uint32_t)
   ENUM_VALUE(TO_ZERO,                    0)
   ENUM_VALUE(TO_NAN,                     1)
ENUM_END(SQ_VTX_CLAMP)

ENUM_BEG(SQ_VTX_FETCH_TYPE, uint32_t)
   ENUM_VALUE(VERTEX_DATA,                0)
   ENUM_VALUE(INSTANCE_DATA,              1)
   ENUM_VALUE(NO_INDEX_OFFSET,            2)
ENUM_END(SQ_VTX_FETCH_TYPE)

ENUM_BEG(SQ_TEX_CLAMP, uint32_t)
   ENUM_VALUE(WRAP,                       0)
   ENUM_VALUE(MIRROR,                     1)
   ENUM_VALUE(CLAMP_LAST_TEXEL,           2)
   ENUM_VALUE(MIRROR_ONCE_LAST_TEXEL,     3)
   ENUM_VALUE(CLAMP_HALF_BORDER,          4)
   ENUM_VALUE(MIRROR_ONCE_HALF_BORDER,    5)
   ENUM_VALUE(CLAMP_BORDER,               6)
   ENUM_VALUE(MIRROR_ONCE_BORDER,         7)
ENUM_END(SQ_TEX_CLAMP)

ENUM_BEG(SQ_TEX_ANISO, uint32_t)
   ENUM_VALUE(ANISO_1_TO_1,               0)
   ENUM_VALUE(ANISO_2_TO_1,               1)
   ENUM_VALUE(ANISO_4_TO_1,               2)
   ENUM_VALUE(ANISO_8_TO_1,               3)
   ENUM_VALUE(ANISO_16_TO_1,              4)
ENUM_END(SQ_TEX_ANISO)

ENUM_BEG(SQ_TEX_BORDER_COLOR, uint32_t)
   ENUM_VALUE(TRANS_BLACK,                0)
   ENUM_VALUE(OPAQUE_BLACK,               1)
   ENUM_VALUE(OPAQUE_WHITE,               2)
   ENUM_VALUE(REGISTER,                   3)
ENUM_END(SQ_TEX_BORDER_COLOR)

ENUM_BEG(SQ_TEX_CHROMA_KEY, uint32_t)
   ENUM_VALUE(DISABLED,                   0)
   ENUM_VALUE(KILL,                       1)
   ENUM_VALUE(BLEND,                      2)
ENUM_END(SQ_TEX_CHROMA_KEY)

ENUM_BEG(SQ_TEX_MPEG_CLAMP, uint32_t)
   ENUM_VALUE(OFF,                        0)
   ENUM_VALUE(CLAMP_9,                    1)
   ENUM_VALUE(CLAMP_10,                   2)
ENUM_END(SQ_TEX_MPEG_CLAMP)

ENUM_BEG(SQ_TEX_ROUNDING_MODE, uint32_t)
   ENUM_VALUE(TRUNCATE,                   0)
   ENUM_VALUE(NEAREST_EVEN,               1)
ENUM_END(SQ_TEX_ROUNDING_MODE)

ENUM_BEG(SQ_TEX_XY_FILTER, uint32_t)
   ENUM_VALUE(POINT,                      0)
   ENUM_VALUE(BILINEAR,                   1)
   ENUM_VALUE(BICUBIC,                    2)
ENUM_END(SQ_TEX_XY_FILTER)

ENUM_BEG(SQ_TEX_Z_FILTER, uint32_t)
   ENUM_VALUE(NONE,                       0)
   ENUM_VALUE(POINT,                      1)
   ENUM_VALUE(LINEAR,                     2)
ENUM_END(SQ_TEX_Z_FILTER)

ENUM_NAMESPACE_END(latte)

#include <common/enum_end.h>

#endif // ifdef LATTE_ENUM_SQ_H
