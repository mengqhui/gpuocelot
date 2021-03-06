# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef int ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 307 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long> ()
# 308 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 309 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(long)) * 8);
# 311 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 312 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 314 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> ()
# 315 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 316 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8);
# 318 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 319 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 321 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> ()
# 322 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 323 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(long)) * 8);
# 325 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 326 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 328 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> ()
# 329 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 330 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8);
# 332 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 333 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 335 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> ()
# 336 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 337 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(long)) * 8);
# 339 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 340 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 342 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> ()
# 343 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 344 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8);
# 346 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 347 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 349 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> ()
# 350 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 351 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(long)) * 8);
# 353 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 354 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 356 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> ()
# 357 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 358 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8);
# 360 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 361 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 47 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long long __int64_t; }
# 48 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long long __uint64_t; }
# 56 "/usr/include/bits/types.h" 3
extern "C" { typedef long long __quad_t; }
# 57 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef __u_quad_t __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef __u_quad_t __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef __u_quad_t __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef __u_quad_t __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef __u_quad_t __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef int __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef int __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 38 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef long double float_t; }
# 40 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef long double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[36];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 70 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 67 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_slist {
# 69 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_slist *__next;
# 70 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_slist_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 94 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 96 "/usr/include/bits/pthreadtypes.h" 3
union {
# 97 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 98 "/usr/include/bits/pthreadtypes.h" 3
__pthread_slist_t __list;
# 99 "/usr/include/bits/pthreadtypes.h" 3
};
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[24];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 171 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 172 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 173 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 174 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 175 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 176 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 177 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 180 "/usr/include/bits/pthreadtypes.h" 3
unsigned char __flags;
# 181 "/usr/include/bits/pthreadtypes.h" 3
unsigned char __shared;
# 182 "/usr/include/bits/pthreadtypes.h" 3
unsigned char __pad1;
# 183 "/usr/include/bits/pthreadtypes.h" 3
unsigned char __pad2;
# 184 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 185 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[20];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 327 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 328 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 330 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 333 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 334 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 336 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 340 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 345 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 346 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 351 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 352 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 360 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 364 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 367 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 368 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 375 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 376 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 380 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 687 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 688 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 693 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 694 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 696 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 700 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 702 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 705 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 706 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 708 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 711 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 712 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 716 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 719 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 720 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 724 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 727 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 728 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 732 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 735 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulong4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 736 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 740 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1003 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1004 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1006 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1008 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1009 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1011 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1013 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1014 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1016 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1018 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1019 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1024 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1026 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1028 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1029 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1031 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1033 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1034 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1036 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1038 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulong4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1039 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1041 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1296 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1297 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1302 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1304 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1306 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1307 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1309 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1311 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1314 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1316 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1317 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1319 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1321 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1322 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1324 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1326 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1327 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1329 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1331 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulong4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1332 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1334 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 279 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long tex1Dfetch(texture< long, 1, cudaReadModeElementType> t, int x)
# 280 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 286 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned long tex1Dfetch(texture< unsigned long, 1, cudaReadModeElementType> t, int x)
# 287 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long1 tex1Dfetch(texture< long1, 1, cudaReadModeElementType> t, int x)
# 294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 298 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 300 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong1 tex1Dfetch(texture< ulong1, 1, cudaReadModeElementType> t, int x)
# 301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 305 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long2 tex1Dfetch(texture< long2, 1, cudaReadModeElementType> t, int x)
# 308 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 312 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 314 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong2 tex1Dfetch(texture< ulong2, 1, cudaReadModeElementType> t, int x)
# 315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 319 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 321 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long4 tex1Dfetch(texture< long4, 1, cudaReadModeElementType> t, int x)
# 322 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 328 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong4 tex1Dfetch(texture< ulong4, 1, cudaReadModeElementType> t, int x)
# 329 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 734 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long tex1D(texture< long, 1, cudaReadModeElementType> t, float x)
# 735 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 739 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 741 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned long tex1D(texture< unsigned long, 1, cudaReadModeElementType> t, float x)
# 742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 746 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long1 tex1D(texture< long1, 1, cudaReadModeElementType> t, float x)
# 749 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 753 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 755 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong1 tex1D(texture< ulong1, 1, cudaReadModeElementType> t, float x)
# 756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 760 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 762 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long2 tex1D(texture< long2, 1, cudaReadModeElementType> t, float x)
# 763 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 769 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong2 tex1D(texture< ulong2, 1, cudaReadModeElementType> t, float x)
# 770 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 776 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long4 tex1D(texture< long4, 1, cudaReadModeElementType> t, float x)
# 777 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 781 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong4 tex1D(texture< ulong4, 1, cudaReadModeElementType> t, float x)
# 784 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1183 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long tex2D(texture< long, 2, cudaReadModeElementType> t, float x, float y)
# 1184 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1190 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned long tex2D(texture< unsigned long, 2, cudaReadModeElementType> t, float x, float y)
# 1191 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1197 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long1 tex2D(texture< long1, 2, cudaReadModeElementType> t, float x, float y)
# 1198 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong1 tex2D(texture< ulong1, 2, cudaReadModeElementType> t, float x, float y)
# 1205 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1209 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1211 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long2 tex2D(texture< long2, 2, cudaReadModeElementType> t, float x, float y)
# 1212 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1218 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong2 tex2D(texture< ulong2, 2, cudaReadModeElementType> t, float x, float y)
# 1219 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1225 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long4 tex2D(texture< long4, 2, cudaReadModeElementType> t, float x, float y)
# 1226 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1232 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong4 tex2D(texture< ulong4, 2, cudaReadModeElementType> t, float x, float y)
# 1233 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1632 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long tex3D(texture< long, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1633 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1639 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned long tex3D(texture< unsigned long, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1640 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1646 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long1 tex3D(texture< long1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1647 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1653 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong1 tex3D(texture< ulong1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1654 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1658 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1660 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long2 tex3D(texture< long2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1661 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1667 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong2 tex3D(texture< ulong2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1668 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1674 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline long4 tex3D(texture< long4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1675 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1681 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ulong4 tex3D(texture< ulong4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1682 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/va.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 268 "/usr/include/unistd.h" 3
extern "C" { typedef __intptr_t intptr_t; }
# 275 "/usr/include/unistd.h" 3
extern "C" { typedef __socklen_t socklen_t; }
# 288 "/usr/include/unistd.h" 3
extern "C" int access(const char *, int) throw() __attribute__((nonnull(1)));
# 293 "/usr/include/unistd.h" 3
extern "C" int euidaccess(const char *, int) throw() __attribute__((nonnull(1)));
# 297 "/usr/include/unistd.h" 3
extern "C" int eaccess(const char *, int) throw() __attribute__((nonnull(1)));
# 305 "/usr/include/unistd.h" 3
extern "C" int faccessat(int, const char *, int, int) throw() __attribute__((nonnull(2)));
# 331 "/usr/include/unistd.h" 3
extern "C" __off_t lseek(int, __off_t, int) throw();
# 342 "/usr/include/unistd.h" 3
extern "C" __off64_t lseek64(int, __off64_t, int) throw();
# 350 "/usr/include/unistd.h" 3
extern "C" int close(int);
# 357 "/usr/include/unistd.h" 3
extern "C" ssize_t read(int, void *, size_t);
# 363 "/usr/include/unistd.h" 3
extern "C" ssize_t write(int, const void *, size_t);
# 373 "/usr/include/unistd.h" 3
extern "C" ssize_t pread(int, void *, size_t, __off_t);
# 381 "/usr/include/unistd.h" 3
extern "C" ssize_t pwrite(int, const void *, size_t, __off_t);
# 401 "/usr/include/unistd.h" 3
extern "C" ssize_t pread64(int, void *, size_t, __off64_t);
# 405 "/usr/include/unistd.h" 3
extern "C" ssize_t pwrite64(int, const void *, size_t, __off64_t);
# 414 "/usr/include/unistd.h" 3
extern "C" int pipe(int [2]) throw();
# 419 "/usr/include/unistd.h" 3
extern "C" int pipe2(int [2], int) throw();
# 429 "/usr/include/unistd.h" 3
extern "C" unsigned alarm(unsigned) throw();
# 441 "/usr/include/unistd.h" 3
extern "C" unsigned sleep(unsigned);
# 449 "/usr/include/unistd.h" 3
extern "C" __useconds_t ualarm(__useconds_t, __useconds_t) throw();
# 457 "/usr/include/unistd.h" 3
extern "C" int usleep(__useconds_t);
# 466 "/usr/include/unistd.h" 3
extern "C" int pause();
# 470 "/usr/include/unistd.h" 3
extern "C" int chown(const char *, __uid_t, __gid_t) throw() __attribute__((nonnull(1)));
# 475 "/usr/include/unistd.h" 3
extern "C" int fchown(int, __uid_t, __gid_t) throw();
# 480 "/usr/include/unistd.h" 3
extern "C" int lchown(const char *, __uid_t, __gid_t) throw() __attribute__((nonnull(1)));
# 488 "/usr/include/unistd.h" 3
extern "C" int fchownat(int, const char *, __uid_t, __gid_t, int) throw() __attribute__((nonnull(2)));
# 494 "/usr/include/unistd.h" 3
extern "C" int chdir(const char *) throw() __attribute__((nonnull(1)));
# 498 "/usr/include/unistd.h" 3
extern "C" int fchdir(int) throw();
# 508 "/usr/include/unistd.h" 3
extern "C" char *getcwd(char *, size_t) throw();
# 514 "/usr/include/unistd.h" 3
extern "C" char *get_current_dir_name() throw();
# 522 "/usr/include/unistd.h" 3
extern "C" char *getwd(char *) throw() __attribute__((__deprecated__)) __attribute__((nonnull(1)));
# 528 "/usr/include/unistd.h" 3
extern "C" int dup(int) throw();
# 531 "/usr/include/unistd.h" 3
extern "C" int dup2(int, int) throw();
# 536 "/usr/include/unistd.h" 3
extern "C" int dup3(int, int, int) throw();
# 540 "/usr/include/unistd.h" 3
extern "C" { extern char **__environ; }
# 542 "/usr/include/unistd.h" 3
extern "C" { extern char **environ; }
# 548 "/usr/include/unistd.h" 3
extern "C" int execve(const char *, char *const [], char *const []) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 554 "/usr/include/unistd.h" 3
extern "C" int fexecve(int, char *const [], char *const []) throw() __attribute__((nonnull(2)));
# 560 "/usr/include/unistd.h" 3
extern "C" int execv(const char *, char *const []) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 565 "/usr/include/unistd.h" 3
extern "C" int execle(const char *, const char *, ...) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 570 "/usr/include/unistd.h" 3
extern "C" int execl(const char *, const char *, ...) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 575 "/usr/include/unistd.h" 3
extern "C" int execvp(const char *, char *const []) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 581 "/usr/include/unistd.h" 3
extern "C" int execlp(const char *, const char *, ...) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 587 "/usr/include/unistd.h" 3
extern "C" int execvpe(const char *, char *const [], char *const []) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 595 "/usr/include/unistd.h" 3
extern "C" int nice(int) throw();
# 600 "/usr/include/unistd.h" 3
extern "C" void _exit(int) __attribute__((__noreturn__));
# 27 "/usr/include/bits/confname.h" 3
enum {
# 28 "/usr/include/bits/confname.h" 3
_PC_LINK_MAX,
# 30 "/usr/include/bits/confname.h" 3
_PC_MAX_CANON,
# 32 "/usr/include/bits/confname.h" 3
_PC_MAX_INPUT,
# 34 "/usr/include/bits/confname.h" 3
_PC_NAME_MAX,
# 36 "/usr/include/bits/confname.h" 3
_PC_PATH_MAX,
# 38 "/usr/include/bits/confname.h" 3
_PC_PIPE_BUF,
# 40 "/usr/include/bits/confname.h" 3
_PC_CHOWN_RESTRICTED,
# 42 "/usr/include/bits/confname.h" 3
_PC_NO_TRUNC,
# 44 "/usr/include/bits/confname.h" 3
_PC_VDISABLE,
# 46 "/usr/include/bits/confname.h" 3
_PC_SYNC_IO,
# 48 "/usr/include/bits/confname.h" 3
_PC_ASYNC_IO,
# 50 "/usr/include/bits/confname.h" 3
_PC_PRIO_IO,
# 52 "/usr/include/bits/confname.h" 3
_PC_SOCK_MAXBUF,
# 54 "/usr/include/bits/confname.h" 3
_PC_FILESIZEBITS,
# 56 "/usr/include/bits/confname.h" 3
_PC_REC_INCR_XFER_SIZE,
# 58 "/usr/include/bits/confname.h" 3
_PC_REC_MAX_XFER_SIZE,
# 60 "/usr/include/bits/confname.h" 3
_PC_REC_MIN_XFER_SIZE,
# 62 "/usr/include/bits/confname.h" 3
_PC_REC_XFER_ALIGN,
# 64 "/usr/include/bits/confname.h" 3
_PC_ALLOC_SIZE_MIN,
# 66 "/usr/include/bits/confname.h" 3
_PC_SYMLINK_MAX,
# 68 "/usr/include/bits/confname.h" 3
_PC_2_SYMLINKS
# 70 "/usr/include/bits/confname.h" 3
};
# 74 "/usr/include/bits/confname.h" 3
enum {
# 75 "/usr/include/bits/confname.h" 3
_SC_ARG_MAX,
# 77 "/usr/include/bits/confname.h" 3
_SC_CHILD_MAX,
# 79 "/usr/include/bits/confname.h" 3
_SC_CLK_TCK,
# 81 "/usr/include/bits/confname.h" 3
_SC_NGROUPS_MAX,
# 83 "/usr/include/bits/confname.h" 3
_SC_OPEN_MAX,
# 85 "/usr/include/bits/confname.h" 3
_SC_STREAM_MAX,
# 87 "/usr/include/bits/confname.h" 3
_SC_TZNAME_MAX,
# 89 "/usr/include/bits/confname.h" 3
_SC_JOB_CONTROL,
# 91 "/usr/include/bits/confname.h" 3
_SC_SAVED_IDS,
# 93 "/usr/include/bits/confname.h" 3
_SC_REALTIME_SIGNALS,
# 95 "/usr/include/bits/confname.h" 3
_SC_PRIORITY_SCHEDULING,
# 97 "/usr/include/bits/confname.h" 3
_SC_TIMERS,
# 99 "/usr/include/bits/confname.h" 3
_SC_ASYNCHRONOUS_IO,
# 101 "/usr/include/bits/confname.h" 3
_SC_PRIORITIZED_IO,
# 103 "/usr/include/bits/confname.h" 3
_SC_SYNCHRONIZED_IO,
# 105 "/usr/include/bits/confname.h" 3
_SC_FSYNC,
# 107 "/usr/include/bits/confname.h" 3
_SC_MAPPED_FILES,
# 109 "/usr/include/bits/confname.h" 3
_SC_MEMLOCK,
# 111 "/usr/include/bits/confname.h" 3
_SC_MEMLOCK_RANGE,
# 113 "/usr/include/bits/confname.h" 3
_SC_MEMORY_PROTECTION,
# 115 "/usr/include/bits/confname.h" 3
_SC_MESSAGE_PASSING,
# 117 "/usr/include/bits/confname.h" 3
_SC_SEMAPHORES,
# 119 "/usr/include/bits/confname.h" 3
_SC_SHARED_MEMORY_OBJECTS,
# 121 "/usr/include/bits/confname.h" 3
_SC_AIO_LISTIO_MAX,
# 123 "/usr/include/bits/confname.h" 3
_SC_AIO_MAX,
# 125 "/usr/include/bits/confname.h" 3
_SC_AIO_PRIO_DELTA_MAX,
# 127 "/usr/include/bits/confname.h" 3
_SC_DELAYTIMER_MAX,
# 129 "/usr/include/bits/confname.h" 3
_SC_MQ_OPEN_MAX,
# 131 "/usr/include/bits/confname.h" 3
_SC_MQ_PRIO_MAX,
# 133 "/usr/include/bits/confname.h" 3
_SC_VERSION,
# 135 "/usr/include/bits/confname.h" 3
_SC_PAGESIZE,
# 138 "/usr/include/bits/confname.h" 3
_SC_RTSIG_MAX,
# 140 "/usr/include/bits/confname.h" 3
_SC_SEM_NSEMS_MAX,
# 142 "/usr/include/bits/confname.h" 3
_SC_SEM_VALUE_MAX,
# 144 "/usr/include/bits/confname.h" 3
_SC_SIGQUEUE_MAX,
# 146 "/usr/include/bits/confname.h" 3
_SC_TIMER_MAX,
# 151 "/usr/include/bits/confname.h" 3
_SC_BC_BASE_MAX,
# 153 "/usr/include/bits/confname.h" 3
_SC_BC_DIM_MAX,
# 155 "/usr/include/bits/confname.h" 3
_SC_BC_SCALE_MAX,
# 157 "/usr/include/bits/confname.h" 3
_SC_BC_STRING_MAX,
# 159 "/usr/include/bits/confname.h" 3
_SC_COLL_WEIGHTS_MAX,
# 161 "/usr/include/bits/confname.h" 3
_SC_EQUIV_CLASS_MAX,
# 163 "/usr/include/bits/confname.h" 3
_SC_EXPR_NEST_MAX,
# 165 "/usr/include/bits/confname.h" 3
_SC_LINE_MAX,
# 167 "/usr/include/bits/confname.h" 3
_SC_RE_DUP_MAX,
# 169 "/usr/include/bits/confname.h" 3
_SC_CHARCLASS_NAME_MAX,
# 172 "/usr/include/bits/confname.h" 3
_SC_2_VERSION,
# 174 "/usr/include/bits/confname.h" 3
_SC_2_C_BIND,
# 176 "/usr/include/bits/confname.h" 3
_SC_2_C_DEV,
# 178 "/usr/include/bits/confname.h" 3
_SC_2_FORT_DEV,
# 180 "/usr/include/bits/confname.h" 3
_SC_2_FORT_RUN,
# 182 "/usr/include/bits/confname.h" 3
_SC_2_SW_DEV,
# 184 "/usr/include/bits/confname.h" 3
_SC_2_LOCALEDEF,
# 187 "/usr/include/bits/confname.h" 3
_SC_PII,
# 189 "/usr/include/bits/confname.h" 3
_SC_PII_XTI,
# 191 "/usr/include/bits/confname.h" 3
_SC_PII_SOCKET,
# 193 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET,
# 195 "/usr/include/bits/confname.h" 3
_SC_PII_OSI,
# 197 "/usr/include/bits/confname.h" 3
_SC_POLL,
# 199 "/usr/include/bits/confname.h" 3
_SC_SELECT,
# 201 "/usr/include/bits/confname.h" 3
_SC_UIO_MAXIOV,
# 203 "/usr/include/bits/confname.h" 3
_SC_IOV_MAX = 60,
# 205 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET_STREAM,
# 207 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET_DGRAM,
# 209 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_COTS,
# 211 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_CLTS,
# 213 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_M,
# 215 "/usr/include/bits/confname.h" 3
_SC_T_IOV_MAX,
# 219 "/usr/include/bits/confname.h" 3
_SC_THREADS,
# 221 "/usr/include/bits/confname.h" 3
_SC_THREAD_SAFE_FUNCTIONS,
# 223 "/usr/include/bits/confname.h" 3
_SC_GETGR_R_SIZE_MAX,
# 225 "/usr/include/bits/confname.h" 3
_SC_GETPW_R_SIZE_MAX,
# 227 "/usr/include/bits/confname.h" 3
_SC_LOGIN_NAME_MAX,
# 229 "/usr/include/bits/confname.h" 3
_SC_TTY_NAME_MAX,
# 231 "/usr/include/bits/confname.h" 3
_SC_THREAD_DESTRUCTOR_ITERATIONS,
# 233 "/usr/include/bits/confname.h" 3
_SC_THREAD_KEYS_MAX,
# 235 "/usr/include/bits/confname.h" 3
_SC_THREAD_STACK_MIN,
# 237 "/usr/include/bits/confname.h" 3
_SC_THREAD_THREADS_MAX,
# 239 "/usr/include/bits/confname.h" 3
_SC_THREAD_ATTR_STACKADDR,
# 241 "/usr/include/bits/confname.h" 3
_SC_THREAD_ATTR_STACKSIZE,
# 243 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIORITY_SCHEDULING,
# 245 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIO_INHERIT,
# 247 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIO_PROTECT,
# 249 "/usr/include/bits/confname.h" 3
_SC_THREAD_PROCESS_SHARED,
# 252 "/usr/include/bits/confname.h" 3
_SC_NPROCESSORS_CONF,
# 254 "/usr/include/bits/confname.h" 3
_SC_NPROCESSORS_ONLN,
# 256 "/usr/include/bits/confname.h" 3
_SC_PHYS_PAGES,
# 258 "/usr/include/bits/confname.h" 3
_SC_AVPHYS_PAGES,
# 260 "/usr/include/bits/confname.h" 3
_SC_ATEXIT_MAX,
# 262 "/usr/include/bits/confname.h" 3
_SC_PASS_MAX,
# 265 "/usr/include/bits/confname.h" 3
_SC_XOPEN_VERSION,
# 267 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XCU_VERSION,
# 269 "/usr/include/bits/confname.h" 3
_SC_XOPEN_UNIX,
# 271 "/usr/include/bits/confname.h" 3
_SC_XOPEN_CRYPT,
# 273 "/usr/include/bits/confname.h" 3
_SC_XOPEN_ENH_I18N,
# 275 "/usr/include/bits/confname.h" 3
_SC_XOPEN_SHM,
# 278 "/usr/include/bits/confname.h" 3
_SC_2_CHAR_TERM,
# 280 "/usr/include/bits/confname.h" 3
_SC_2_C_VERSION,
# 282 "/usr/include/bits/confname.h" 3
_SC_2_UPE,
# 285 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG2,
# 287 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG3,
# 289 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG4,
# 292 "/usr/include/bits/confname.h" 3
_SC_CHAR_BIT,
# 294 "/usr/include/bits/confname.h" 3
_SC_CHAR_MAX,
# 296 "/usr/include/bits/confname.h" 3
_SC_CHAR_MIN,
# 298 "/usr/include/bits/confname.h" 3
_SC_INT_MAX,
# 300 "/usr/include/bits/confname.h" 3
_SC_INT_MIN,
# 302 "/usr/include/bits/confname.h" 3
_SC_LONG_BIT,
# 304 "/usr/include/bits/confname.h" 3
_SC_WORD_BIT,
# 306 "/usr/include/bits/confname.h" 3
_SC_MB_LEN_MAX,
# 308 "/usr/include/bits/confname.h" 3
_SC_NZERO,
# 310 "/usr/include/bits/confname.h" 3
_SC_SSIZE_MAX,
# 312 "/usr/include/bits/confname.h" 3
_SC_SCHAR_MAX,
# 314 "/usr/include/bits/confname.h" 3
_SC_SCHAR_MIN,
# 316 "/usr/include/bits/confname.h" 3
_SC_SHRT_MAX,
# 318 "/usr/include/bits/confname.h" 3
_SC_SHRT_MIN,
# 320 "/usr/include/bits/confname.h" 3
_SC_UCHAR_MAX,
# 322 "/usr/include/bits/confname.h" 3
_SC_UINT_MAX,
# 324 "/usr/include/bits/confname.h" 3
_SC_ULONG_MAX,
# 326 "/usr/include/bits/confname.h" 3
_SC_USHRT_MAX,
# 329 "/usr/include/bits/confname.h" 3
_SC_NL_ARGMAX,
# 331 "/usr/include/bits/confname.h" 3
_SC_NL_LANGMAX,
# 333 "/usr/include/bits/confname.h" 3
_SC_NL_MSGMAX,
# 335 "/usr/include/bits/confname.h" 3
_SC_NL_NMAX,
# 337 "/usr/include/bits/confname.h" 3
_SC_NL_SETMAX,
# 339 "/usr/include/bits/confname.h" 3
_SC_NL_TEXTMAX,
# 342 "/usr/include/bits/confname.h" 3
_SC_XBS5_ILP32_OFF32,
# 344 "/usr/include/bits/confname.h" 3
_SC_XBS5_ILP32_OFFBIG,
# 346 "/usr/include/bits/confname.h" 3
_SC_XBS5_LP64_OFF64,
# 348 "/usr/include/bits/confname.h" 3
_SC_XBS5_LPBIG_OFFBIG,
# 351 "/usr/include/bits/confname.h" 3
_SC_XOPEN_LEGACY,
# 353 "/usr/include/bits/confname.h" 3
_SC_XOPEN_REALTIME,
# 355 "/usr/include/bits/confname.h" 3
_SC_XOPEN_REALTIME_THREADS,
# 358 "/usr/include/bits/confname.h" 3
_SC_ADVISORY_INFO,
# 360 "/usr/include/bits/confname.h" 3
_SC_BARRIERS,
# 362 "/usr/include/bits/confname.h" 3
_SC_BASE,
# 364 "/usr/include/bits/confname.h" 3
_SC_C_LANG_SUPPORT,
# 366 "/usr/include/bits/confname.h" 3
_SC_C_LANG_SUPPORT_R,
# 368 "/usr/include/bits/confname.h" 3
_SC_CLOCK_SELECTION,
# 370 "/usr/include/bits/confname.h" 3
_SC_CPUTIME,
# 372 "/usr/include/bits/confname.h" 3
_SC_THREAD_CPUTIME,
# 374 "/usr/include/bits/confname.h" 3
_SC_DEVICE_IO,
# 376 "/usr/include/bits/confname.h" 3
_SC_DEVICE_SPECIFIC,
# 378 "/usr/include/bits/confname.h" 3
_SC_DEVICE_SPECIFIC_R,
# 380 "/usr/include/bits/confname.h" 3
_SC_FD_MGMT,
# 382 "/usr/include/bits/confname.h" 3
_SC_FIFO,
# 384 "/usr/include/bits/confname.h" 3
_SC_PIPE,
# 386 "/usr/include/bits/confname.h" 3
_SC_FILE_ATTRIBUTES,
# 388 "/usr/include/bits/confname.h" 3
_SC_FILE_LOCKING,
# 390 "/usr/include/bits/confname.h" 3
_SC_FILE_SYSTEM,
# 392 "/usr/include/bits/confname.h" 3
_SC_MONOTONIC_CLOCK,
# 394 "/usr/include/bits/confname.h" 3
_SC_MULTI_PROCESS,
# 396 "/usr/include/bits/confname.h" 3
_SC_SINGLE_PROCESS,
# 398 "/usr/include/bits/confname.h" 3
_SC_NETWORKING,
# 400 "/usr/include/bits/confname.h" 3
_SC_READER_WRITER_LOCKS,
# 402 "/usr/include/bits/confname.h" 3
_SC_SPIN_LOCKS,
# 404 "/usr/include/bits/confname.h" 3
_SC_REGEXP,
# 406 "/usr/include/bits/confname.h" 3
_SC_REGEX_VERSION,
# 408 "/usr/include/bits/confname.h" 3
_SC_SHELL,
# 410 "/usr/include/bits/confname.h" 3
_SC_SIGNALS,
# 412 "/usr/include/bits/confname.h" 3
_SC_SPAWN,
# 414 "/usr/include/bits/confname.h" 3
_SC_SPORADIC_SERVER,
# 416 "/usr/include/bits/confname.h" 3
_SC_THREAD_SPORADIC_SERVER,
# 418 "/usr/include/bits/confname.h" 3
_SC_SYSTEM_DATABASE,
# 420 "/usr/include/bits/confname.h" 3
_SC_SYSTEM_DATABASE_R,
# 422 "/usr/include/bits/confname.h" 3
_SC_TIMEOUTS,
# 424 "/usr/include/bits/confname.h" 3
_SC_TYPED_MEMORY_OBJECTS,
# 426 "/usr/include/bits/confname.h" 3
_SC_USER_GROUPS,
# 428 "/usr/include/bits/confname.h" 3
_SC_USER_GROUPS_R,
# 430 "/usr/include/bits/confname.h" 3
_SC_2_PBS,
# 432 "/usr/include/bits/confname.h" 3
_SC_2_PBS_ACCOUNTING,
# 434 "/usr/include/bits/confname.h" 3
_SC_2_PBS_LOCATE,
# 436 "/usr/include/bits/confname.h" 3
_SC_2_PBS_MESSAGE,
# 438 "/usr/include/bits/confname.h" 3
_SC_2_PBS_TRACK,
# 440 "/usr/include/bits/confname.h" 3
_SC_SYMLOOP_MAX,
# 442 "/usr/include/bits/confname.h" 3
_SC_STREAMS,
# 444 "/usr/include/bits/confname.h" 3
_SC_2_PBS_CHECKPOINT,
# 447 "/usr/include/bits/confname.h" 3
_SC_V6_ILP32_OFF32,
# 449 "/usr/include/bits/confname.h" 3
_SC_V6_ILP32_OFFBIG,
# 451 "/usr/include/bits/confname.h" 3
_SC_V6_LP64_OFF64,
# 453 "/usr/include/bits/confname.h" 3
_SC_V6_LPBIG_OFFBIG,
# 456 "/usr/include/bits/confname.h" 3
_SC_HOST_NAME_MAX,
# 458 "/usr/include/bits/confname.h" 3
_SC_TRACE,
# 460 "/usr/include/bits/confname.h" 3
_SC_TRACE_EVENT_FILTER,
# 462 "/usr/include/bits/confname.h" 3
_SC_TRACE_INHERIT,
# 464 "/usr/include/bits/confname.h" 3
_SC_TRACE_LOG,
# 467 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_SIZE,
# 469 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_ASSOC,
# 471 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_LINESIZE,
# 473 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_SIZE,
# 475 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_ASSOC,
# 477 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_LINESIZE,
# 479 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_SIZE,
# 481 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_ASSOC,
# 483 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_LINESIZE,
# 485 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_SIZE,
# 487 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_ASSOC,
# 489 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_LINESIZE,
# 491 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_SIZE,
# 493 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_ASSOC,
# 495 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_LINESIZE,
# 499 "/usr/include/bits/confname.h" 3
_SC_IPV6 = 235,
# 501 "/usr/include/bits/confname.h" 3
_SC_RAW_SOCKETS,
# 504 "/usr/include/bits/confname.h" 3
_SC_V7_ILP32_OFF32,
# 506 "/usr/include/bits/confname.h" 3
_SC_V7_ILP32_OFFBIG,
# 508 "/usr/include/bits/confname.h" 3
_SC_V7_LP64_OFF64,
# 510 "/usr/include/bits/confname.h" 3
_SC_V7_LPBIG_OFFBIG,
# 513 "/usr/include/bits/confname.h" 3
_SC_SS_REPL_MAX,
# 516 "/usr/include/bits/confname.h" 3
_SC_TRACE_EVENT_NAME_MAX,
# 518 "/usr/include/bits/confname.h" 3
_SC_TRACE_NAME_MAX,
# 520 "/usr/include/bits/confname.h" 3
_SC_TRACE_SYS_MAX,
# 522 "/usr/include/bits/confname.h" 3
_SC_TRACE_USER_EVENT_MAX,
# 525 "/usr/include/bits/confname.h" 3
_SC_XOPEN_STREAMS,
# 528 "/usr/include/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_INHERIT,
# 530 "/usr/include/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_PROTECT
# 532 "/usr/include/bits/confname.h" 3
};
# 536 "/usr/include/bits/confname.h" 3
enum {
# 537 "/usr/include/bits/confname.h" 3
_CS_PATH,
# 540 "/usr/include/bits/confname.h" 3
_CS_V6_WIDTH_RESTRICTED_ENVS,
# 544 "/usr/include/bits/confname.h" 3
_CS_GNU_LIBC_VERSION,
# 546 "/usr/include/bits/confname.h" 3
_CS_GNU_LIBPTHREAD_VERSION,
# 549 "/usr/include/bits/confname.h" 3
_CS_V5_WIDTH_RESTRICTED_ENVS,
# 553 "/usr/include/bits/confname.h" 3
_CS_V7_WIDTH_RESTRICTED_ENVS,
# 557 "/usr/include/bits/confname.h" 3
_CS_LFS_CFLAGS = 1000,
# 559 "/usr/include/bits/confname.h" 3
_CS_LFS_LDFLAGS,
# 561 "/usr/include/bits/confname.h" 3
_CS_LFS_LIBS,
# 563 "/usr/include/bits/confname.h" 3
_CS_LFS_LINTFLAGS,
# 565 "/usr/include/bits/confname.h" 3
_CS_LFS64_CFLAGS,
# 567 "/usr/include/bits/confname.h" 3
_CS_LFS64_LDFLAGS,
# 569 "/usr/include/bits/confname.h" 3
_CS_LFS64_LIBS,
# 571 "/usr/include/bits/confname.h" 3
_CS_LFS64_LINTFLAGS,
# 574 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
# 576 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LDFLAGS,
# 578 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LIBS,
# 580 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LINTFLAGS,
# 582 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_CFLAGS,
# 584 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LDFLAGS,
# 586 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LIBS,
# 588 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
# 590 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_CFLAGS,
# 592 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LDFLAGS,
# 594 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LIBS,
# 596 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LINTFLAGS,
# 598 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_CFLAGS,
# 600 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
# 602 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LIBS,
# 604 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
# 607 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_CFLAGS,
# 609 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
# 611 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LIBS,
# 613 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
# 615 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
# 617 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
# 619 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LIBS,
# 621 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
# 623 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_CFLAGS,
# 625 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LDFLAGS,
# 627 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LIBS,
# 629 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
# 631 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
# 633 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
# 635 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
# 637 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
# 640 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_CFLAGS,
# 642 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
# 644 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LIBS,
# 646 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
# 648 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
# 650 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
# 652 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LIBS,
# 654 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
# 656 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_CFLAGS,
# 658 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LDFLAGS,
# 660 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LIBS,
# 662 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
# 664 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
# 666 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
# 668 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
# 670 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
# 673 "/usr/include/bits/confname.h" 3
_CS_V6_ENV,
# 675 "/usr/include/bits/confname.h" 3
_CS_V7_ENV
# 677 "/usr/include/bits/confname.h" 3
};
# 609 "/usr/include/unistd.h" 3
extern "C" long pathconf(const char *, int) throw() __attribute__((nonnull(1)));
# 613 "/usr/include/unistd.h" 3
extern "C" long fpathconf(int, int) throw();
# 616 "/usr/include/unistd.h" 3
extern "C" long sysconf(int) throw();
# 620 "/usr/include/unistd.h" 3
extern "C" size_t confstr(int, char *, size_t) throw();
# 625 "/usr/include/unistd.h" 3
extern "C" __pid_t getpid() throw();
# 628 "/usr/include/unistd.h" 3
extern "C" __pid_t getppid() throw();
# 633 "/usr/include/unistd.h" 3
extern "C" __pid_t getpgrp() throw();
# 643 "/usr/include/unistd.h" 3
extern "C" __pid_t __getpgid(__pid_t) throw();
# 645 "/usr/include/unistd.h" 3
extern "C" __pid_t getpgid(__pid_t) throw();
# 652 "/usr/include/unistd.h" 3
extern "C" int setpgid(__pid_t, __pid_t) throw();
# 669 "/usr/include/unistd.h" 3
extern "C" int setpgrp() throw();
# 686 "/usr/include/unistd.h" 3
extern "C" __pid_t setsid() throw();
# 690 "/usr/include/unistd.h" 3
extern "C" __pid_t getsid(__pid_t) throw();
# 694 "/usr/include/unistd.h" 3
extern "C" __uid_t getuid() throw();
# 697 "/usr/include/unistd.h" 3
extern "C" __uid_t geteuid() throw();
# 700 "/usr/include/unistd.h" 3
extern "C" __gid_t getgid() throw();
# 703 "/usr/include/unistd.h" 3
extern "C" __gid_t getegid() throw();
# 708 "/usr/include/unistd.h" 3
extern "C" int getgroups(int, __gid_t []) throw();
# 712 "/usr/include/unistd.h" 3
extern "C" int group_member(__gid_t) throw();
# 719 "/usr/include/unistd.h" 3
extern "C" int setuid(__uid_t) throw();
# 724 "/usr/include/unistd.h" 3
extern "C" int setreuid(__uid_t, __uid_t) throw();
# 729 "/usr/include/unistd.h" 3
extern "C" int seteuid(__uid_t) throw();
# 736 "/usr/include/unistd.h" 3
extern "C" int setgid(__gid_t) throw();
# 741 "/usr/include/unistd.h" 3
extern "C" int setregid(__gid_t, __gid_t) throw();
# 746 "/usr/include/unistd.h" 3
extern "C" int setegid(__gid_t) throw();
# 752 "/usr/include/unistd.h" 3
extern "C" int getresuid(__uid_t *, __uid_t *, __uid_t *) throw();
# 757 "/usr/include/unistd.h" 3
extern "C" int getresgid(__gid_t *, __gid_t *, __gid_t *) throw();
# 762 "/usr/include/unistd.h" 3
extern "C" int setresuid(__uid_t, __uid_t, __uid_t) throw();
# 767 "/usr/include/unistd.h" 3
extern "C" int setresgid(__gid_t, __gid_t, __gid_t) throw();
# 775 "/usr/include/unistd.h" 3
extern "C" __pid_t fork() throw();
# 783 "/usr/include/unistd.h" 3
extern "C" __pid_t vfork() throw();
# 789 "/usr/include/unistd.h" 3
extern "C" char *ttyname(int) throw();
# 793 "/usr/include/unistd.h" 3
extern "C" int ttyname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 798 "/usr/include/unistd.h" 3
extern "C" int isatty(int) throw();
# 804 "/usr/include/unistd.h" 3
extern "C" int ttyslot() throw();
# 809 "/usr/include/unistd.h" 3
extern "C" int link(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 815 "/usr/include/unistd.h" 3
extern "C" int linkat(int, const char *, int, const char *, int) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 822 "/usr/include/unistd.h" 3
extern "C" int symlink(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 828 "/usr/include/unistd.h" 3
extern "C" ssize_t readlink(const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 835 "/usr/include/unistd.h" 3
extern "C" int symlinkat(const char *, int, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 839 "/usr/include/unistd.h" 3
extern "C" ssize_t readlinkat(int, const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 845 "/usr/include/unistd.h" 3
extern "C" int unlink(const char *) throw() __attribute__((nonnull(1)));
# 849 "/usr/include/unistd.h" 3
extern "C" int unlinkat(int, const char *, int) throw() __attribute__((nonnull(2)));
# 854 "/usr/include/unistd.h" 3
extern "C" int rmdir(const char *) throw() __attribute__((nonnull(1)));
# 858 "/usr/include/unistd.h" 3
extern "C" __pid_t tcgetpgrp(int) throw();
# 861 "/usr/include/unistd.h" 3
extern "C" int tcsetpgrp(int, __pid_t) throw();
# 868 "/usr/include/unistd.h" 3
extern "C" char *getlogin();
# 876 "/usr/include/unistd.h" 3
extern "C" int getlogin_r(char *, size_t) __attribute__((nonnull(1)));
# 881 "/usr/include/unistd.h" 3
extern "C" int setlogin(const char *) throw() __attribute__((nonnull(1)));
# 59 "/usr/include/getopt.h" 3
extern "C" { extern char *optarg; }
# 73 "/usr/include/getopt.h" 3
extern "C" { extern int optind; }
# 78 "/usr/include/getopt.h" 3
extern "C" { extern int opterr; }
# 82 "/usr/include/getopt.h" 3
extern "C" { extern int optopt; }
# 152 "/usr/include/getopt.h" 3
extern "C" int getopt(int, char *const *, const char *) throw();
# 898 "/usr/include/unistd.h" 3
extern "C" int gethostname(char *, size_t) throw() __attribute__((nonnull(1)));
# 905 "/usr/include/unistd.h" 3
extern "C" int sethostname(const char *, size_t) throw() __attribute__((nonnull(1)));
# 910 "/usr/include/unistd.h" 3
extern "C" int sethostid(long) throw();
# 916 "/usr/include/unistd.h" 3
extern "C" int getdomainname(char *, size_t) throw() __attribute__((nonnull(1)));
# 918 "/usr/include/unistd.h" 3
extern "C" int setdomainname(const char *, size_t) throw() __attribute__((nonnull(1)));
# 925 "/usr/include/unistd.h" 3
extern "C" int vhangup() throw();
# 928 "/usr/include/unistd.h" 3
extern "C" int revoke(const char *) throw() __attribute__((nonnull(1)));
# 936 "/usr/include/unistd.h" 3
extern "C" int profil(unsigned short *, size_t, size_t, unsigned) throw() __attribute__((nonnull(1)));
# 944 "/usr/include/unistd.h" 3
extern "C" int acct(const char *) throw();
# 948 "/usr/include/unistd.h" 3
extern "C" char *getusershell() throw();
# 949 "/usr/include/unistd.h" 3
extern "C" void endusershell() throw();
# 950 "/usr/include/unistd.h" 3
extern "C" void setusershell() throw();
# 956 "/usr/include/unistd.h" 3
extern "C" int daemon(int, int) throw();
# 963 "/usr/include/unistd.h" 3
extern "C" int chroot(const char *) throw() __attribute__((nonnull(1)));
# 967 "/usr/include/unistd.h" 3
extern "C" char *getpass(const char *) __attribute__((nonnull(1)));
# 976 "/usr/include/unistd.h" 3
extern "C" int fsync(int);
# 983 "/usr/include/unistd.h" 3
extern "C" long gethostid();
# 986 "/usr/include/unistd.h" 3
extern "C" void sync() throw();
# 992 "/usr/include/unistd.h" 3
extern "C" int getpagesize() throw() __attribute__((__const__));
# 997 "/usr/include/unistd.h" 3
extern "C" int getdtablesize() throw();
# 1007 "/usr/include/unistd.h" 3
extern "C" int truncate(const char *, __off_t) throw() __attribute__((nonnull(1)));
# 1019 "/usr/include/unistd.h" 3
extern "C" int truncate64(const char *, __off64_t) throw() __attribute__((nonnull(1)));
# 1026 "/usr/include/unistd.h" 3
extern "C" int ftruncate(int, __off_t) throw();
# 1036 "/usr/include/unistd.h" 3
extern "C" int ftruncate64(int, __off64_t) throw();
# 1047 "/usr/include/unistd.h" 3
extern "C" int brk(void *) throw();
# 1053 "/usr/include/unistd.h" 3
extern "C" void *sbrk(intptr_t) throw();
# 1068 "/usr/include/unistd.h" 3
extern "C" long syscall(long, ...) throw();
# 1091 "/usr/include/unistd.h" 3
extern "C" int lockf(int, int, __off_t);
# 1101 "/usr/include/unistd.h" 3
extern "C" int lockf64(int, int, __off64_t);
# 1122 "/usr/include/unistd.h" 3
extern "C" int fdatasync(int);
# 1130 "/usr/include/unistd.h" 3
extern "C" char *crypt(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 1135 "/usr/include/unistd.h" 3
extern "C" void encrypt(char *, int) throw() __attribute__((nonnull(1)));
# 1142 "/usr/include/unistd.h" 3
extern "C" void swab(const void *__restrict__, void *__restrict__, ssize_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 1151 "/usr/include/unistd.h" 3
extern "C" char *ctermid(char *) throw();
# 12 "parboil/parboil.h"
extern "C" { struct pb_Parameters {
# 13 "parboil/parboil.h"
char *outFile;
# 16 "parboil/parboil.h"
char **inpFiles;
# 20 "parboil/parboil.h"
int synchronizeGpu;
# 27 "parboil/parboil.h"
}; }
# 39 "parboil/parboil.h"
extern "C" pb_Parameters *pb_ReadParameters(int *, char **);
# 44 "parboil/parboil.h"
extern "C" void pb_FreeParameters(pb_Parameters *);
# 49 "parboil/parboil.h"
extern "C" int pb_Parameters_CountInputs(pb_Parameters *);
# 53 "parboil/parboil.h"
extern "C" { typedef unsigned long long pb_Timestamp; }
# 58 "parboil/parboil.h"
enum pb_TimerState {
# 59 "parboil/parboil.h"
pb_Timer_STOPPED,
# 60 "parboil/parboil.h"
pb_Timer_RUNNING
# 61 "parboil/parboil.h"
};
# 63 "parboil/parboil.h"
extern "C" { struct pb_Timer {
# 64 "parboil/parboil.h"
pb_TimerState state;
# 65 "parboil/parboil.h"
pb_Timestamp elapsed;
# 66 "parboil/parboil.h"
pb_Timestamp init;
# 69 "parboil/parboil.h"
}; }
# 76 "parboil/parboil.h"
extern "C" void pb_ResetTimer(pb_Timer *);
# 84 "parboil/parboil.h"
extern "C" void pb_StartTimer(pb_Timer *);
# 91 "parboil/parboil.h"
extern "C" void pb_StopTimer(pb_Timer *);
# 95 "parboil/parboil.h"
extern "C" double pb_GetElapsedTime(pb_Timer *);
# 98 "parboil/parboil.h"
enum pb_TimerID {
# 99 "parboil/parboil.h"
pb_TimerID_NONE,
# 100 "parboil/parboil.h"
pb_TimerID_IO,
# 101 "parboil/parboil.h"
pb_TimerID_GPU,
# 102 "parboil/parboil.h"
pb_TimerID_COPY,
# 104 "parboil/parboil.h"
pb_TimerID_COMPUTE,
# 107 "parboil/parboil.h"
pb_TimerID_LAST
# 108 "parboil/parboil.h"
};
# 111 "parboil/parboil.h"
extern "C" { struct pb_TimerSet {
# 112 "parboil/parboil.h"
pb_TimerID current;
# 113 "parboil/parboil.h"
pb_Timer timers[pb_TimerID_LAST];
# 114 "parboil/parboil.h"
}; }
# 118 "parboil/parboil.h"
extern "C" void pb_InitializeTimerSet(pb_TimerSet *);
# 124 "parboil/parboil.h"
extern "C" void pb_SwitchToTimer(pb_TimerSet *, pb_TimerID);
# 128 "parboil/parboil.h"
extern "C" void pb_PrintTimerSet(pb_TimerSet *);
# 132 "parboil/parboil.h"
extern "C" int pb_compareFiles(const char *, const char *, double);
# 136 "parboil/parboil.h"
extern "C" int pb_compareFilesBin(const char *, const char *, double);
# 8 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
struct Shell {
# 10 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
char Type[2];
# 11 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
int numPrimitives;
# 12 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
float Alpha[20];
# 13 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
float Coeff[20];
# 14 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
int inList[20];
# 15 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
int myAtom;
# 16 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
};
# 18 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
struct Atom {
# 20 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
char Type[1];
# 21 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
int numShells;
# 22 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
Shell AtomShell[10];
# 23 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
float X;
# 24 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
float Y;
# 25 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
float Z;
# 26 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/shell.h"
};
# 16 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
void ComputeX(uint4 *, float *, int);
# 18 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float product1D(float, float, float, float, float);
# 19 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float dist2(float3, float3);
# 20 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float dist2(float4, float4);
# 21 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float3 ReducePair(float4, float4, float2, float2, float);
# 22 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float ComputeI(float, float, float, float, float, float, float, float);
# 24 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float Root(float);
# 26 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetBases(int, int, int, int &, int &, int &, int &, int &);
# 27 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetAtoms(int, int &, int &, int &, int &);
# 28 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetOffsets(int, int &, int &, int &, int &);
# 29 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetNs(int, int, int, int, int, int &, int &, int &, int &);
# 30 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void KahanSum(float &, float, float &, float &, float &);
# 32 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
static texture< float4, 1, cudaReadModeElementType> texCoors;
# 33 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
static texture< float2, 1, cudaReadModeElementType> texSprms;
# 34 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
static texture< float, 1, cudaReadModeElementType> texWghts;
# 37 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
void ComputeX(uint4 *d_Work, float *d_Output, int Offset) ;
# 118 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
void DoReduction(float *d_ReductionSum, float *d_Output, uint2 *
# 119 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
d_FinalReduce, int block_size, int Offset) ;
# 150 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float product1D(float alpha_a, float coor_a, float alpha_b, float
# 151 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
coor_b, float sum_ab)
# 152 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 154 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 157 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float dist2(float3 Atom1, float3 Atom2)
# 158 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 163 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 166 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float dist2(float4 Atom1, float4 Atom2)
# 167 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 172 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 175 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float3 ReducePair(float4 Atom1, float4 Atom2, float2 Param1, float2
# 176 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
Param2, float sum_12)
# 177 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 184 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 187 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) float Root(float X)
# 188 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 258 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 261 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetBases(int Work, int thid, int Shift, int &localthid, int &
# 262 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
a1, int &a2, int &a3, int &a4)
# 263 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 269 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 272 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetNs(int localthid, int a1, int a2, int a3, int a4, int &
# 273 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
n1, int &n2, int &n3, int &n4)
# 274 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 289 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 292 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetAtoms(int Work, int &atom1, int &atom2, int &atom3, int &atom4)
# 293 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 298 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 301 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
__attribute__((unused)) void GetOffsets(int Work, int &off1, int &off2, int &off3, int &off4)
# 302 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{int volatile ___ = 1;
# 307 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
exit(___);}
# 20 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
uint4 *d_Block_Work;
# 21 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
uint2 *d_FinalReduce;
# 22 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float *d_Output, *d_ReductionSum;
# 23 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaArray *d_Coors, *d_Sprms, *d_Wghts;
# 25 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float4 *Coors;
# 26 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float2 *Sprms;
# 28 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
uint4 *Block_Work;
# 30 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int totNumBlocks;
# 31 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int MaxBlocks;
# 33 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Atom *ComputeAtom, *BasisAtom;
# 34 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Shell *ComputeShell;
# 35 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float Coor[64];
# 36 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float Alpha[64];
# 37 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float Coeff[64];
# 38 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float Wghts[2];
# 40 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float *ReductionSum;
# 41 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int totReductionElements;
# 43 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
uint2 *FinalReduce;
# 45 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void AllocateDataOnDevice(int, int, int, int, int, int);
# 46 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void RunKernel(int, pb_TimerSet *, pb_Parameters *);
# 48 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void CalcOnHost(int);
# 49 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Atom *ReadBasisAtoms(int &, pb_Parameters *);
# 50 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int TotalNumOfShells(char *, int, int &);
# 51 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateShells(char *, int);
# 52 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateHostData(int, int, int);
# 53 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int NumOfIntegrals(int);
# 54 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void DistributeBlockWork(int);
# 55 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void FreeAllData(pb_TimerSet *);
# 56 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateWeights();
# 58 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
double root1(double);
# 60 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int main(int argc, char *argv[])
# 61 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 62 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_TimerSet timers;
# 63 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_Parameters *params;
# 65 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_InitializeTimerSet(&timers);
# 66 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
params = pb_ReadParameters(&argc, argv);
# 68 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
totNumBlocks = 0;
# 69 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
MaxBlocks = 0;
# 71 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numBasisAtoms;
# 72 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_IO);
# 73 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
BasisAtom = ReadBasisAtoms(numBasisAtoms, params);
# 74 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COMPUTE);
# 76 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int totNumAtoms;
# 77 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int totNumShells = TotalNumOfShells((params->inpFiles)[0], numBasisAtoms, totNumAtoms);
# 79 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
totReductionElements = ((((totNumShells * (totNumShells + 1)) * (totNumShells + 2)) * (totNumShells + 3)) / 24);
# 81 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
ComputeAtom = ((Atom *)malloc(totNumAtoms * sizeof(Atom)));
# 82 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
ComputeShell = ((Shell *)malloc(totNumShells * sizeof(Shell)));
# 84 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_IO);
# 85 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
PopulateShells((params->inpFiles)[0], numBasisAtoms);
# 86 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COMPUTE);
# 90 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int totBasisShells = 0;
# 91 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int i = 0; i < numBasisAtoms; i++) {
# 92 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int j = 0; j < ((BasisAtom[i]).numShells); j++) {
# 93 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
totBasisShells += ((((BasisAtom[i]).AtomShell)[j]).numPrimitives); } }
# 95 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Coors = ((float4 *)malloc(totNumAtoms * sizeof(float4)));
# 96 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Sprms = ((float2 *)malloc(totBasisShells * sizeof(float2)));
# 97 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
PopulateHostData(totNumAtoms, totNumShells, numBasisAtoms);
# 100 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FinalReduce = ((uint2 *)malloc(totReductionElements * sizeof(uint2)));
# 101 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numIntegrals = NumOfIntegrals(totNumShells);
# 102 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_IO);
# 103 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Total # of integrals to compute: %d\n", numIntegrals);
# 104 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Total # of blocks allocated: %d\n", totNumBlocks);
# 105 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Final array size: %d\n", totReductionElements);
# 106 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COMPUTE);
# 107 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Block_Work = ((uint4 *)malloc(totNumBlocks * sizeof(uint4)));
# 108 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
DistributeBlockWork(totNumShells);
# 110 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int d_output_mem = (totNumBlocks * sizeof(float));
# 111 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int d_work_mem = (totNumBlocks * sizeof(uint4));
# 112 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int reduction_mem = (totReductionElements * sizeof(float));
# 113 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int final_mem = (totReductionElements * sizeof(uint2));
# 115 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
ReductionSum = ((float *)malloc(reduction_mem));
# 118 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COPY);
# 119 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
AllocateDataOnDevice(d_output_mem, d_work_mem, reduction_mem, final_mem, totNumAtoms, totBasisShells);
# 121 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COMPUTE);
# 122 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int d_total_mem = (((d_output_mem + d_work_mem) + reduction_mem) + final_mem);
# 123 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("%.2lf MB allocated\n", ((double)d_total_mem) / (1048576));
# 124 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("maxblocks = %d\n", MaxBlocks);
# 127 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
RunKernel(numIntegrals, &timers, params);
# 130 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COPY);
# 131 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpy(ReductionSum, d_ReductionSum, reduction_mem, cudaMemcpyDeviceToHost);
# 133 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 133); exit(-1); } }
# 134 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_COMPUTE);
# 136 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FreeAllData(&timers);
# 137 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (params->outFile)
# 138 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 139 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_IO);
# 140 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FILE *file = fopen(params->outFile, "w");
# 141 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("totReductionElements %d\n", totReductionElements);
# 143 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int i = 0; i < 20000; i++)
# 144 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 145 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fprintf(file, "%d\t%e\n", i, ReductionSum[i]);
# 146 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 147 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fclose(file);
# 148 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 150 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (pb_compareFiles(params->outFile, "data/rpes.out", 1))
# 151 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 152 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("TEST PASSED\n");
# 153 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else
# 155 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 156 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("TEST FAILED\n");
# 157 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 159 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(&timers, pb_TimerID_NONE);
# 160 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_PrintTimerSet(&timers);
# 161 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_FreeParameters(params);
# 163 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
return 0;
# 164 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 166 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void RunKernel(int numIntegrals, pb_TimerSet *timers, pb_Parameters *
# 167 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
params)
# 168 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 169 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int runs = ((int)ceil(((1.0) * totNumBlocks) / (65535)));
# 170 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("%d computation cycles will be performed...\n", runs);
# 171 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int RemainingBlocks = totNumBlocks;
# 172 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int StartBlock = 0;
# 174 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int run = 0; run < runs; run++)
# 175 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 176 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numBlocks = min(65535, RemainingBlocks);
# 177 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
dim3 grid(numBlocks, 1, 1);
# 178 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
dim3 block(64, 1, 1);
# 180 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_GPU);
# 181 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaConfigureCall(grid, block) ? ((void)0) : ComputeX(d_Block_Work, d_Output, StartBlock);
# 182 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 182); exit(-1); } }
# 183 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (params->synchronizeGpu) { cudaThreadSynchronize(); }
# 184 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_COMPUTE);
# 186 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
RemainingBlocks -= 65535;
# 187 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
StartBlock += numBlocks;
# 188 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 190 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
runs = ((int)ceil(((1.0) * totReductionElements) / (65535)));
# 191 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("done.\n\n%d reduction cycles will be performed...\n", runs);
# 192 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int RemainReduction = totReductionElements;
# 193 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int Offset = 0;
# 194 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int run = 0; run < runs; run++)
# 195 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 196 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numBlocks = min(65535, RemainReduction);
# 197 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
dim3 grid(numBlocks, 1, 1);
# 198 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
dim3 block(MaxBlocks, 1, 1);
# 200 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_GPU);
# 201 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaConfigureCall(grid, block) ? ((void)0) : DoReduction(d_ReductionSum, d_Output, d_FinalReduce, MaxBlocks, Offset);
# 203 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 203); exit(-1); } }
# 204 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (params->synchronizeGpu) { cudaThreadSynchronize(); }
# 205 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_COMPUTE);
# 207 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
RemainReduction -= 65535;
# 208 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Offset += numBlocks;
# 209 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 210 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 212 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void AllocateDataOnDevice(int d_output_mem, int d_work_mem, int
# 213 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
reduction_mem, int final_mem, int
# 214 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
numCoors, int numSprms)
# 215 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 216 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMalloc((void **)(&d_ReductionSum), reduction_mem);
# 217 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 217); exit(-1); } }
# 218 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMalloc((void **)(&d_Output), d_output_mem);
# 219 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 219); exit(-1); } }
# 220 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMalloc((void **)(&d_Block_Work), d_work_mem);
# 221 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 221); exit(-1); } }
# 222 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMalloc((void **)(&d_FinalReduce), final_mem);
# 223 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 223); exit(-1); } }
# 224 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMallocArray(&d_Coors, &(texCoors.channelDesc), numCoors, 1);
# 226 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 226); exit(-1); } }
# 227 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMallocArray(&d_Sprms, &(texSprms.channelDesc), numSprms, 1);
# 229 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 229); exit(-1); } }
# 230 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMallocArray(&d_Wghts, &(texWghts.channelDesc), 1 << 2, 2);
# 232 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 232); exit(-1); } }
# 234 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpy(d_Block_Work, Block_Work, d_work_mem, cudaMemcpyHostToDevice);
# 236 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 236); exit(-1); } }
# 237 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpy(d_FinalReduce, FinalReduce, final_mem, cudaMemcpyHostToDevice);
# 239 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 239); exit(-1); } }
# 241 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpyToArray(d_Coors, 0, 0, (void *)Coors, numCoors * sizeof(float4), cudaMemcpyHostToDevice);
# 244 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 244); exit(-1); } }
# 245 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpyToArray(d_Sprms, 0, 0, (void *)Sprms, numSprms * sizeof(float2), cudaMemcpyHostToDevice);
# 248 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 248); exit(-1); } }
# 249 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaMemcpyToArray(d_Wghts, 0, 0, (void *)(Wghts), (2) * sizeof(float), cudaMemcpyHostToDevice);
# 252 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 252); exit(-1); } }
# 254 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
(texWghts.filterMode) = cudaFilterModeLinear;
# 256 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaBindTextureToArray(texCoors, d_Coors, texCoors.channelDesc);
# 257 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 257); exit(-1); } }
# 258 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaBindTextureToArray(texSprms, d_Sprms, texSprms.channelDesc);
# 259 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 259); exit(-1); } }
# 260 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaBindTextureToArray(texWghts, d_Wghts, texWghts.channelDesc);
# 261 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 261); exit(-1); } }
# 262 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 264 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void FreeAllData(pb_TimerSet *timers)
# 265 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 266 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_COPY);
# 267 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFree((void *)d_FinalReduce);
# 268 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 268); exit(-1); } }
# 269 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFree((void *)d_Block_Work);
# 270 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 270); exit(-1); } }
# 271 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFree((void *)d_Output);
# 272 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 272); exit(-1); } }
# 273 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFree((void *)d_ReductionSum);
# 274 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 274); exit(-1); } }
# 275 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFreeArray(d_Coors);
# 276 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 276); exit(-1); } }
# 277 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFreeArray(d_Wghts);
# 278 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 278); exit(-1); } }
# 279 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
cudaFreeArray(d_Sprms);
# 280 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{ cudaError_t err; if ((err = cudaGetLastError()) != (cudaSuccess)) { printf("CUDA error: %s, line %d\n", cudaGetErrorString(err), 280); exit(-1); } }
# 281 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
pb_SwitchToTimer(timers, pb_TimerID_COMPUTE);
# 283 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
free((void *)Block_Work);
# 284 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
free((void *)FinalReduce);
# 286 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
free((void *)ComputeAtom);
# 287 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
free((void *)BasisAtom);
# 288 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
free((void *)ComputeShell);
# 289 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 291 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Atom *ReadBasisAtoms(int &numBasisAtoms, pb_Parameters *params)
# 292 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 293 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FILE *basis = fopen((params->inpFiles)[1], "r");
# 294 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (!(basis))
# 295 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 296 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Unable to open file %s\n", (params->inpFiles)[1]);
# 297 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
exit(0);
# 298 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 299 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numAtoms = 0, numShells = 0;
# 300 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %*s %d", &numAtoms);
# 301 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %*s %d", &numShells);
# 302 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\n>>>>>>> STARTED BASIS SET OUTPUT <<<<<<<\n");
# 303 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\n# OF KNOWN ATOMS:  %d\n", numAtoms);
# 304 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("# OF KNOWN SHELLS: %d\n\n", numShells);
# 305 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
numBasisAtoms = numAtoms;
# 307 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Atom *BasisAtom = ((Atom *)malloc(numAtoms * sizeof(Atom)));
# 309 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int atom = 0; atom < numAtoms; atom++)
# 310 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 311 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
char type[4];
# 312 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
char buff[4];
# 313 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %s", type);
# 314 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %d", &numShells);
# 315 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((BasisAtom[atom]).numShells) = numShells;
# 316 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
strcpy((BasisAtom[atom]).Type, type);
# 317 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\nAtom %s (%d shells)\n", (BasisAtom[atom]).Type, (BasisAtom[atom]).numShells);
# 320 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell = 0; shell < numShells; shell++)
# 321 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 322 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numPrimitives = 0;
# 323 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %*d %*s %d", &numPrimitives);
# 324 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((((BasisAtom[atom]).AtomShell)[shell]).numPrimitives) = numPrimitives;
# 325 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
sprintf(buff, "%d", shell + 1);
# 326 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
strcpy((((BasisAtom[atom]).AtomShell)[shell]).Type, type);
# 327 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
strcpy(((((BasisAtom[atom]).AtomShell)[shell]).Type) + 1, buff);
# 328 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\tShell %s: %d primitives\n", (((BasisAtom[atom]).AtomShell)[shell]).Type, (((BasisAtom[atom]).AtomShell)[shell]).numPrimitives);
# 331 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int prim = 0; prim < numPrimitives; prim++)
# 332 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 333 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(basis, "%*s %*s %*s %f %f", &(((((BasisAtom[atom]).AtomShell)[shell]).Alpha)[prim]), &(((((BasisAtom[atom]).AtomShell)[shell]).Coeff)[prim]));
# 336 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\t\tprimitive %d: %10.2f    %5.2f\n", prim + 1, ((((BasisAtom[atom]).AtomShell)[shell]).Alpha)[prim], ((((BasisAtom[atom]).AtomShell)[shell]).Coeff)[prim]);
# 339 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 340 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("\n");
# 341 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 342 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 343 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf(">>>>>>>> DONE BASIS SET OUTPUT <<<<<<<<\n\n\n");
# 344 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fclose(basis);
# 345 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
return BasisAtom;
# 346 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 348 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int TotalNumOfShells(char *fname, int numBasisAtoms, int &totNumAtoms)
# 349 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 350 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FILE *inp = fopen(fname, "r");
# 351 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (!(inp))
# 352 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 353 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Unable to open %s\n", fname);
# 354 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
exit(0);
# 355 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 356 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numShells = 0;
# 357 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(inp, "%*s %d", &totNumAtoms);
# 359 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int atom = 0; atom < totNumAtoms; atom++)
# 360 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 361 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
char type[8];
# 362 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(inp, "%s %*s %*s %*s", type);
# 364 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int notfound = 1;
# 365 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int batom = 0; batom < numBasisAtoms; batom++)
# 366 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 367 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (!(strcmp((BasisAtom[batom]).Type, type)))
# 368 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 369 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
numShells += ((BasisAtom[batom]).numShells);
# 370 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
notfound = 0;
# 371 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
break;
# 372 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 373 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 374 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (notfound)
# 375 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 376 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Unable to find atom \'%s\' in the basis set\n", type);
# 377 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
exit(0);
# 378 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 379 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 381 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fclose(inp);
# 382 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
return numShells;
# 383 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 385 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateShells(char *fname, int numBasisAtoms)
# 386 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 387 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
FILE *inp = fopen(fname, "r");
# 388 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (!(inp))
# 389 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 390 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
printf("Unable to open %s\n", fname);
# 391 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
exit(0);
# 392 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 393 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numAtoms = 0, currentShell = 0;
# 394 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(inp, "%*s %d", &numAtoms);
# 396 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int atom = 0; atom < numAtoms; atom++)
# 397 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 398 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fscanf(inp, "%s %f %f %f", &((ComputeAtom[atom]).Type), &((ComputeAtom[atom]).X), &((ComputeAtom[atom]).Y), &((ComputeAtom[atom]).Z));
# 402 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int currentInList = 0;
# 403 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int batom = 0; batom < numBasisAtoms; batom++)
# 404 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 405 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (!(strcmp((BasisAtom[batom]).Type, (ComputeAtom[atom]).Type)))
# 406 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 407 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell = 0; shell < ((BasisAtom[batom]).numShells); shell++)
# 409 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 410 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
(ComputeShell[currentShell]) = (((BasisAtom[batom]).AtomShell)[shell]);
# 412 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((ComputeShell[currentShell]).myAtom) = atom;
# 415 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int prim = 0; prim < ((((BasisAtom[batom]).AtomShell)[shell]).numPrimitives); prim++) {
# 418 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
(((ComputeShell[currentShell]).inList)[prim]) = (currentInList++); }
# 421 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
currentShell++;
# 422 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 423 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
break;
# 424 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else
# 427 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 428 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell = 0; shell < ((BasisAtom[batom]).numShells); shell++) {
# 430 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
currentInList += ((((BasisAtom[batom]).AtomShell)[shell]).numPrimitives); }
# 432 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 433 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 434 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 435 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
fclose(inp);
# 436 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 438 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateHostData(int totNumAtoms, int totNumShells, int numBasisAtoms)
# 439 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 440 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
PopulateWeights();
# 441 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int atom = 0; atom < totNumAtoms; atom++)
# 442 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 443 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Coors[atom]).x) = ((ComputeAtom[atom]).X);
# 444 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Coors[atom]).y) = ((ComputeAtom[atom]).Y);
# 445 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Coors[atom]).z) = ((ComputeAtom[atom]).Z);
# 446 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 448 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int currentPos = 0;
# 449 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int batom = 0; batom < numBasisAtoms; batom++)
# 450 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 451 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell = 0; shell < ((BasisAtom[batom]).numShells); shell++)
# 452 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 453 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int prim = 0; prim < ((((BasisAtom[batom]).AtomShell)[shell]).numPrimitives); prim++)
# 456 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 457 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Sprms[currentPos]).x) = (((((BasisAtom[batom]).AtomShell)[shell]).Alpha)[prim]);
# 459 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Sprms[currentPos]).y) = (((((BasisAtom[batom]).AtomShell)[shell]).Coeff)[prim]);
# 461 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
currentPos++;
# 462 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 463 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 464 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 465 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 467 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int NumOfIntegrals(int totNumShells)
# 468 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 469 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numIntegrals = 0;
# 470 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int firstRedElement = 0;
# 471 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int redElement = 0;
# 472 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell1 = 0; shell1 < totNumShells; shell1++) {
# 473 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell2 = shell1; shell2 < totNumShells; shell2++) {
# 474 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell3 = shell2; shell3 < totNumShells; shell3++) {
# 475 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell4 = shell3; shell4 < totNumShells; shell4++)
# 476 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 477 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int integrals = (((((ComputeShell[shell1]).numPrimitives) * ((ComputeShell[shell2]).numPrimitives)) * ((ComputeShell[shell3]).numPrimitives)) * ((ComputeShell[shell4]).numPrimitives));
# 481 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
numIntegrals += integrals;
# 483 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int blocks = ((int)ceil(((1.0) * integrals) / (64)));
# 484 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
totNumBlocks += blocks;
# 485 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (blocks > MaxBlocks) {
# 486 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
MaxBlocks = blocks; }
# 487 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((FinalReduce[redElement]).x) = firstRedElement;
# 488 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((FinalReduce[redElement]).y) = blocks;
# 489 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
firstRedElement += blocks;
# 490 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
redElement++;
# 491 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} } } }
# 492 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
return numIntegrals;
# 493 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 495 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void DistributeBlockWork(int totNumShells)
# 496 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 497 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int numElements = 0;
# 498 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int StartBlock = 0;
# 499 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell1 = 0; shell1 < totNumShells; shell1++)
# 500 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 501 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell2 = shell1; shell2 < totNumShells; shell2++)
# 502 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 503 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell3 = shell2; shell3 < totNumShells; shell3++)
# 504 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 505 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int shell4 = shell3; shell4 < totNumShells; shell4++)
# 506 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 507 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int integrals = (((((ComputeShell[shell1]).numPrimitives) * ((ComputeShell[shell2]).numPrimitives)) * ((ComputeShell[shell3]).numPrimitives)) * ((ComputeShell[shell4]).numPrimitives));
# 512 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int blocks = ((int)ceil(((1.0) * integrals) / (64)));
# 513 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
StartBlock = numElements;
# 515 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int block = 0; block < blocks; block++)
# 516 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 517 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int a4 = ((ComputeShell[shell4]).numPrimitives);
# 518 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int a3 = ((ComputeShell[shell3]).numPrimitives);
# 519 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int a2 = ((ComputeShell[shell2]).numPrimitives);
# 520 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int a1 = ((ComputeShell[shell1]).numPrimitives);
# 522 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int offset4 = (((ComputeShell[shell4]).inList)[0]);
# 523 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int offset3 = (((ComputeShell[shell3]).inList)[0]);
# 524 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int offset2 = (((ComputeShell[shell2]).inList)[0]);
# 525 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
int offset1 = (((ComputeShell[shell1]).inList)[0]);
# 527 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Block_Work[numElements]).y) = ((((((ComputeShell[shell1]).myAtom) << 24) | (((ComputeShell[shell2]).myAtom) << 16)) | (((ComputeShell[shell3]).myAtom) << 8)) | ((ComputeShell[shell4]).myAtom));
# 533 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Block_Work[numElements]).z) = ((((offset1 << 24) | (offset2 << 16)) | (offset3 << 8)) | offset4);
# 539 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Block_Work[numElements]).x) = ((((a1 << 12) | (a2 << 8)) | (a3 << 4)) | a4);
# 545 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Block_Work[numElements]).w) = StartBlock;
# 547 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
numElements++;
# 548 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 549 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 550 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 551 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 552 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 553 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 555 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
double root1(double X)
# 556 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 557 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
double PIE4;
# 558 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
double WW1 = (0.0);
# 559 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
double F1, E, Y, inv;
# 561 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
PIE4 = (0.7853981633974479459);
# 563 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (2.999999999999999864e-07))
# 564 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 565 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = ((1.0) - ((0.3333333330000000094) * X));
# 566 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 567 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (1.0))
# 568 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 569 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
F1 = (((((((((((((((((((-(8.363139180039570209e-08)) * X) + (1.212226035128269918e-06)) * X) - (1.15662609053480997e-05)) * X) + (9.251973745126469944e-05)) * X) - (0.0006409941131294320197)) * X) + (0.003787870442150090017)) * X) - (0.01851851724584849951)) * X) + (0.07142857132982219359)) * X) - (0.1999999999970230036)) * X) + (0.3333333333333179938));
# 574 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((X + X) * F1) + exp(-X));
# 575 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 576 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (3.0))
# 577 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 578 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Y = (X - (2.0));
# 579 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
F1 = (((((((((((((((((((((((-(1.617027824255579922e-10)) * Y) + (1.962152508657760185e-09)) * Y) - (2.142344681984189847e-08)) * Y) + (2.172165563363179881e-07)) * Y) - (1.988501713293709805e-06)) * Y) + (1.624293214389109833e-05)) * Y) - (0.0001167402980398950067)) * Y) + (0.0007248887320523319773)) * Y) - (0.003794900037071560154)) * Y) + (0.01617234886646609984)) * Y) - (0.05294281483297359758)) * Y) + (0.1157021808561670001));
# 585 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((X + X) * F1) + exp(-X));
# 587 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 588 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (5.0))
# 589 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 590 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
Y = (X - (4.0));
# 591 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
F1 = (((((((((((((((((((((((-(2.624535647722989995e-11)) * Y) + (3.240310416238230067e-10)) * Y) - (3.614965656162999975e-09)) * Y) + (3.760256799971000095e-08)) * Y) - (3.553558319674999763e-07)) * Y) + (3.022556449730999986e-06)) * Y) - (2.290098979646999956e-05)) * Y) + (0.000152653746114800006)) * Y) - (0.0008819473758943789958)) * Y) + (0.004332079495146109842)) * Y) - (0.01752578216199260006)) * Y) + (0.0528406320615584027));
# 597 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((X + X) * F1) + exp(-X));
# 599 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 600 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (10.0))
# 601 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 602 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
E = exp(-X);
# 603 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
inv = ((1) / X);
# 604 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((((((((((((((0.4689751137502199962) * inv) - (0.6995560229898499793)) * inv) + (0.5368928327188700056)) * inv) - (0.3288303041839800156)) * inv) + (0.2464559695600199996)) * inv) - (0.4998407284843600085)) * inv) - (3.150107877408500072e-06)) * E) + sqrt(PIE4 * inv));
# 609 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 610 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (15.0))
# 611 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 612 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
E = exp(-X);
# 613 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
inv = ((1) / X);
# 614 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((((((((-(0.1878468646351199867)) * inv) + (0.2299184916498500098)) * inv) - (0.4989375251404700173)) * inv) - (2.191651213160700096e-05)) * E) + sqrt(PIE4 * inv));
# 618 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else {
# 619 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
if (X < (33.0))
# 620 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 621 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
E = exp(-X);
# 622 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
inv = ((1) / X);
# 623 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = (((((((0.196232641494300003) * inv) - (0.4969524146448999757)) * inv) - (6.015658118648099898e-05)) * E) + sqrt(PIE4 * inv));
# 626 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} else
# 628 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 629 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
inv = ((1) / X);
# 630 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
WW1 = sqrt(PIE4 * inv);
# 631 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
} } } } } } }
# 633 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
return WW1;
# 634 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 636 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
void PopulateWeights()
# 637 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 638 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
for (int i = 0; i < 2; i++)
# 639 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
{
# 640 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
float X = ((float)((((1.0) * i) * (10)) / (2 - 1)));
# 641 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
((Wghts)[i]) = (root1(X));
# 642 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 643 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu"
}
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c"
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 90 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_000014b0_00000000-3_main.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_000014b0_00000000-3_main.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d39302d30313032,0x69762e090a0a3930,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3233662e206d6172,0x72616475635f5f20,0x70395a5f5f667465\n"
".quad 0x4431746375646f72,0x5f20296666666666,0x6375646f7270395a,0x6666666666443174\n"
".quad 0x6d617261702e2820,0x5f5f203233662e20,0x6d72617061647563,0x7270395a5f5f3166\n"
".quad 0x664431746375646f,0x702e202c66666666,0x33662e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f32666d726170,0x6375646f7270395a,0x6666666666443174,0x6d617261702e202c\n"
".quad 0x5f5f203233662e20,0x6d72617061647563,0x7270395a5f5f3366,0x664431746375646f\n"
".quad 0x702e202c66666666,0x33662e206d617261,0x616475635f5f2032,0x5f5f34666d726170\n"
".quad 0x6375646f7270395a,0x6666666666443174,0x6d617261702e202c,0x5f5f203233662e20\n"
".quad 0x6d72617061647563,0x7270395a5f5f3566,0x664431746375646f,0x090a0a2966666666\n"
".quad 0x656c62697369762e,0x2820636e75662e20,0x2e206d617261702e,0x75635f5f20323366\n"
".quad 0x5f5f667465726164,0x363274736964355a,0x5f533374616f6c66,0x736964355a5f2029\n"
".quad 0x74616f6c66363274,0x61702e28205f5333,0x696c612e206d6172,0x38622e2034206e67\n"
".quad 0x70616475635f5f20,0x5a5f5f31666d7261,0x6636327473696435,0x5b5f533374616f6c\n"
".quad 0x61702e202c5d3231,0x696c612e206d6172,0x38622e2034206e67,0x70616475635f5f20\n"
".quad 0x5a5f5f32666d7261,0x6636327473696435,0x5b5f533374616f6c,0x2e090a0a295d3231\n"
".quad 0x20656c6269736976,0x2e2820636e75662e,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6674657261,0x6636327473696435,0x295f533474616f6c,0x74736964355a5f20\n"
".quad 0x3474616f6c663632,0x7261702e28205f53,0x67696c612e206d61,0x38622e203631206e\n"
".quad 0x70616475635f5f20,0x5a5f5f31666d7261,0x6636327473696435,0x5b5f533474616f6c\n"
".quad 0x61702e202c5d3631,0x696c612e206d6172,0x622e203631206e67,0x616475635f5f2038\n"
".quad 0x5f5f32666d726170,0x363274736964355a,0x5f533474616f6c66,0x090a0a295d36315b\n"
".quad 0x656c62697369762e,0x2820636e75662e20,0x2e206d617261702e,0x2034206e67696c61\n"
".quad 0x75635f5f2038622e,0x5f5f667465726164,0x637564655230315a,0x6c66367269615065\n"
".quad 0x66365f533474616f,0x5f30533274616f6c,0x5f20295d32315b66,0x637564655230315a\n"
".quad 0x6c66367269615065,0x66365f533474616f,0x5f30533274616f6c,0x617261702e282066\n"
".quad 0x6e67696c612e206d,0x2038622e20363120,0x6170616475635f5f,0x315a5f5f31666d72\n"
".quad 0x5065637564655230,0x616f6c6636726961,0x6f6c66365f533474,0x5b665f3053327461\n"
".quad 0x61702e202c5d3631,0x696c612e206d6172,0x622e203631206e67,0x616475635f5f2038\n"
".quad 0x5f5f32666d726170,0x637564655230315a,0x6c66367269615065,0x66365f533474616f\n"
".quad 0x5f30533274616f6c,0x2e202c5d36315b66,0x612e206d61726170,0x2e2038206e67696c\n"
".quad 0x6475635f5f203862,0x5f33666d72617061,0x7564655230315a5f,0x6636726961506563\n"
".quad 0x365f533474616f6c,0x30533274616f6c66,0x2e202c5d385b665f,0x612e206d61726170\n"
".quad 0x2e2038206e67696c,0x6475635f5f203862,0x5f34666d72617061,0x7564655230315a5f\n"
".quad 0x6636726961506563,0x365f533474616f6c,0x30533274616f6c66,0x2e202c5d385b665f\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5f35666d72617061,0x7564655230315a5f\n"
".quad 0x6636726961506563,0x365f533474616f6c,0x30533274616f6c66,0x762e090a0a29665f\n"
".quad 0x2e20656c62697369,0x702e2820636e7566,0x33662e206d617261,0x616475635f5f2032\n"
".quad 0x345a5f5f66746572,0x5f202966746f6f52,0x2066746f6f52345a,0x206d617261702e28\n"
".quad 0x635f5f203233662e,0x666d726170616475,0x6f6f52345a5f5f31,0x762e090a0a296674\n"
".quad 0x2e20656c62697369,0x385a5f20636e7566,0x7365736142746547,0x535f536952696969\n"
".quad 0x2e28205f535f535f,0x732e206d61726170,0x6475635f5f203233,0x5f31666d72617061\n"
".quad 0x6142746547385a5f,0x6952696969736573,0x5f535f535f535f53,0x6d617261702e202c\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x6547385a5f5f3266,0x6969736573614274\n"
".quad 0x535f535f53695269,0x61702e202c5f535f,0x3233732e206d6172,0x70616475635f5f20\n"
".quad 0x5a5f5f33666d7261,0x6573614274654738,0x5f53695269696973,0x202c5f535f535f53\n"
".quad 0x2e206d617261702e,0x75635f5f20323375,0x34666d7261706164,0x42746547385a5f5f\n"
".quad 0x5269696973657361,0x535f535f535f5369,0x617261702e202c5f,0x5f203233752e206d\n"
".quad 0x726170616475635f,0x47385a5f5f35666d,0x6973657361427465,0x5f535f5369526969\n"
".quad 0x702e202c5f535f53,0x33752e206d617261,0x616475635f5f2032,0x5f5f36666d726170\n"
".quad 0x736142746547385a,0x5369526969697365,0x2c5f535f535f535f,0x206d617261702e20\n"
".quad 0x635f5f203233752e,0x666d726170616475,0x746547385a5f5f37,0x6969697365736142\n"
".quad 0x5f535f535f536952,0x7261702e202c5f53,0x203233752e206d61,0x6170616475635f5f\n"
".quad 0x385a5f5f38666d72,0x7365736142746547,0x535f536952696969,0x0a0a295f535f535f\n"
".quad 0x6c62697369762e09,0x20636e75662e2065,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x2e28205f535f535f,0x732e206d61726170,0x6475635f5f203233,0x5f31666d72617061\n"
".quad 0x734e746547355a5f,0x5369526969696969,0x2e202c5f535f535f,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5f32666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x2e202c5f535f535f,0x732e206d61726170,0x6475635f5f203233,0x5f33666d72617061\n"
".quad 0x734e746547355a5f,0x5369526969696969,0x2e202c5f535f535f,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5f34666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x2e202c5f535f535f,0x732e206d61726170,0x6475635f5f203233,0x5f35666d72617061\n"
".quad 0x734e746547355a5f,0x5369526969696969,0x2e202c5f535f535f,0x752e206d61726170\n"
".quad 0x6475635f5f203233,0x5f36666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x2e202c5f535f535f,0x752e206d61726170,0x6475635f5f203233,0x5f37666d72617061\n"
".quad 0x734e746547355a5f,0x5369526969696969,0x2e202c5f535f535f,0x752e206d61726170\n"
".quad 0x6475635f5f203233,0x5f38666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x2e202c5f535f535f,0x752e206d61726170,0x6475635f5f203233,0x5f39666d72617061\n"
".quad 0x734e746547355a5f,0x5369526969696969,0x0a0a295f535f535f,0x6c62697369762e09\n"
".quad 0x20636e75662e2065,0x7441746547385a5f,0x5f53695269736d6f,0x702e28205f535f53\n"
".quad 0x33732e206d617261,0x616475635f5f2032,0x5f5f31666d726170,0x6f7441746547385a\n"
".quad 0x535f53695269736d,0x61702e202c5f535f,0x3233752e206d6172,0x70616475635f5f20\n"
".quad 0x5a5f5f32666d7261,0x6d6f744174654738,0x5f535f5369526973,0x7261702e202c5f53\n"
".quad 0x203233752e206d61,0x6170616475635f5f,0x385a5f5f33666d72,0x736d6f7441746547\n"
".quad 0x535f535f53695269,0x617261702e202c5f,0x5f203233752e206d,0x726170616475635f\n"
".quad 0x47385a5f5f34666d,0x69736d6f74417465,0x5f535f535f536952,0x6d617261702e202c\n"
".quad 0x5f5f203233752e20,0x6d72617061647563,0x6547385a5f5f3566,0x5269736d6f744174\n"
".quad 0x295f535f535f5369,0x697369762e090a0a,0x6e75662e20656c62,0x654730315a5f2063\n"
".quad 0x7374657366664f74,0x535f535f53695269,0x617261702e28205f,0x5f203233732e206d\n"
".quad 0x726170616475635f,0x30315a5f5f31666d,0x657366664f746547,0x535f536952697374\n"
".quad 0x61702e202c5f535f,0x3233752e206d6172,0x70616475635f5f20,0x5a5f5f32666d7261\n"
".quad 0x66664f7465473031,0x5369526973746573,0x2e202c5f535f535f,0x752e206d61726170\n"
".quad 0x6475635f5f203233,0x5f33666d72617061,0x4f74654730315a5f,0x5269737465736666\n"
".quad 0x2c5f535f535f5369,0x206d617261702e20,0x635f5f203233752e,0x666d726170616475\n"
".quad 0x654730315a5f5f34,0x7374657366664f74,0x535f535f53695269,0x617261702e202c5f\n"
".quad 0x5f203233752e206d,0x726170616475635f,0x30315a5f5f35666d,0x657366664f746547\n"
".quad 0x535f536952697374,0x2f090a0a295f535f,0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d,0x696c69706d6f4320,0x2f706d742f20676e\n"
".quad 0x305f746678706d74,0x5f30623431303030,0x3030303030303030,0x2e6e69616d5f372d\n"
".quad 0x2820692e33707063,0x4263632f706d742f,0x69363179452e2349,0x2d2d2f2f090a2948\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2f2f090a0a2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x704f202f2f090a2d\n"
".quad 0x090a3a736e6f6974,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2f090a2d2d2d2d2d,0x656772615420202f,0x49202c7874703a74,0x30325f6d733a4153\n"
".quad 0x6e6169646e45202c,0x2c656c7474696c3a,0x7265746e696f5020,0x32333a657a695320\n"
".quad 0x4f2d20202f2f090a,0x6d6974704f280933,0x206e6f6974617a69,0x090a296c6576656c\n"
".quad 0x0930672d20202f2f,0x6c20677562654428,0x2f090a296c657665,0x2809326d2d20202f\n"
".quad 0x612074726f706552,0x6569726f73697664,0x2d2d2f2f090a2973,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x6c69662e090a0a2d,0x6f633c2209310965\n"
".quad 0x696c2d646e616d6d,0x662e090a223e656e,0x2f22093209656c69,0x78706d742f706d74\n"
".quad 0x31303030305f7466,0x303030305f306234,0x6d5f362d30303030,0x616475632e6e6961\n"
".quad 0x227570672e326566,0x09656c69662e090a,0x2f7273752f220933,0x2f6363672f62696c\n"
".quad 0x6e696c2d36383669,0x342f756e672d7875,0x636e692f352e342e,0x6474732f6564756c\n"
".quad 0x090a22682e666564,0x093409656c69662e,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x697665642f747263,0x69746e75725f6563\n"
".quad 0x2e090a22682e656d,0x22093509656c6966,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x682f6564756c636e,0x696665645f74736f,0x090a22682e73656e\n"
".quad 0x093609656c69662e,0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x5f6e69746c697562,0x22682e7365707974,0x09656c69662e090a\n"
".quad 0x2f7273752f220937,0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e\n"
".quad 0x6563697665642f65,0x682e73657079745f,0x656c69662e090a22,0x7273752f22093809\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x65766972642f6564\n"
".quad 0x2e73657079745f72,0x6c69662e090a2268,0x73752f2209390965,0x2f6c61636f6c2f72\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x667275732f656475,0x657079745f656361\n"
".quad 0x662e090a22682e73,0x2209303109656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x742f6564756c636e,0x745f657275747865,0x0a22682e73657079\n"
".quad 0x3109656c69662e09,0x2f7273752f220931,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x726f746365762f65,0x682e73657079745f,0x656c69662e090a22\n"
".quad 0x73752f2209323109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x697665642f656475,0x636e75616c5f6563,0x656d617261705f68,0x0a22682e73726574\n"
".quad 0x3109656c69662e09,0x2f7273752f220933,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x74732f7472632f65,0x6c635f656761726f,0x090a22682e737361\n"
".quad 0x343109656c69662e,0x692f7273752f2209,0x622f6564756c636e,0x657079742f737469\n"
".quad 0x662e090a22682e73,0x2209353109656c69,0x636e692f7273752f,0x6d69742f6564756c\n"
".quad 0x662e090a22682e65,0x2209363109656c69,0x6f6e2f656d6f682f,0x6568632f6c616d72\n"
".quad 0x70672f74756f6b63,0x2f746f6c65636f75,0x61702f7374736574,0x65742f6c696f6272\n"
".quad 0x736570722f737473,0x656b5f737972632f,0x2275632e6c656e72,0x09656c69662e090a\n"
".quad 0x7273752f22093731,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x6f6d6d6f632f6564,0x6974636e75665f6e,0x090a22682e736e6f,0x383109656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x75665f6874616d2f,0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220939310965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x74616d2f6564756c\n"
".quad 0x6174736e6f635f68,0x090a22682e73746e,0x303209656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x5f6563697665642f\n"
".quad 0x6e6f6974636e7566,0x662e090a22682e73,0x2209313209656c69,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e,0x6f74615f31315f6d\n"
".quad 0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093232\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x32315f6d732f6564\n"
".quad 0x5f63696d6f74615f,0x6e6f6974636e7566,0x662e090a22682e73,0x2209333209656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e\n"
".quad 0x756f645f33315f6d,0x636e75665f656c62,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x7273752f22093432,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x30325f6d732f6564,0x5f63696d6f74615f,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209353209656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x732f6564756c636e,0x746e695f30325f6d,0x2e736369736e6972,0x6c69662e090a2268\n"
".quad 0x752f220936320965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x7275732f6564756c,0x6e75665f65636166,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x73752f2209373209,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x747865742f656475,0x637465665f657275,0x6974636e75665f68,0x090a22682e736e6f\n"
".quad 0x383209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x75665f6874616d2f,0x5f736e6f6974636e,0x337874705f6c6264\n"
".quad 0x2e090a0a0a22682e,0x20656c6269736976,0x2e2820636e75662e,0x662e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6674657261,0x746375646f727039,0x2966666666664431\n"
".quad 0x646f7270395a5f20,0x6666664431746375,0x7261702e28206666,0x203233662e206d61\n"
".quad 0x6170616475635f5f,0x395a5f5f31666d72,0x31746375646f7270,0x202c666666666644\n"
".quad 0x2e206d617261702e,0x75635f5f20323366,0x32666d7261706164,0x646f7270395a5f5f\n"
".quad 0x6666664431746375,0x7261702e202c6666,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x395a5f5f33666d72,0x31746375646f7270,0x202c666666666644,0x2e206d617261702e\n"
".quad 0x75635f5f20323366,0x34666d7261706164,0x646f7270395a5f5f,0x6666664431746375\n"
".quad 0x7261702e202c6666,0x203233662e206d61,0x6170616475635f5f,0x395a5f5f35666d72\n"
".quad 0x31746375646f7270,0x0a29666666666644,0x6765722e090a7b09,0x6625203233662e20\n"
".quad 0x2e090a3b3e35313c,0x3109363109636f6c,0x444c240a30093235,0x5f5f6e6967656257\n"
".quad 0x6375646f7270395a,0x6666666666443174,0x61702e646c090a3a,0x203233662e6d6172\n"
".quad 0x5f5b202c31662509,0x726170616475635f,0x70395a5f5f31666d,0x4431746375646f72\n"
".quad 0x0a3b5d6666666666,0x3233662e766f6d09,0x25202c3266250920,0x2e646c090a3b3166\n"
".quad 0x33662e6d61726170,0x202c336625092032,0x70616475635f5f5b,0x5a5f5f32666d7261\n"
".quad 0x746375646f727039,0x5d66666666664431,0x662e766f6d090a3b,0x2c34662509203233\n"
".quad 0x6c090a3b33662520,0x2e6d617261702e64,0x3566250920323366,0x6475635f5f5b202c\n"
".quad 0x5f33666d72617061,0x75646f7270395a5f,0x6666666644317463,0x766f6d090a3b5d66\n"
".quad 0x662509203233662e,0x0a3b356625202c36,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x635f5f5b202c3766,0x666d726170616475,0x6f7270395a5f5f34,0x6666443174637564\n"
".quad 0x6d090a3b5d666666,0x09203233662e766f,0x376625202c386625,0x61702e646c090a3b\n"
".quad 0x203233662e6d6172,0x5f5b202c39662509,0x726170616475635f,0x70395a5f5f35666d\n"
".quad 0x4431746375646f72,0x0a3b5d6666666666,0x3233662e766f6d09,0x202c303166250920\n"
".quad 0x6c2e090a3b396625,0x353109363109636f,0x6c756d090a300933,0x662509203233662e\n"
".quad 0x2c366625202c3131,0x66090a3b38662520,0x33662e6e722e616d,0x2c32316625092032\n"
".quad 0x6625202c32662520,0x3b31316625202c34,0x70612e766964090a,0x3233662e786f7270\n"
".quad 0x202c333166250920,0x6625202c32316625,0x2e7473090a3b3031,0x33662e6d61726170\n"
".quad 0x75635f5f5b092032,0x5f5f667465726164,0x6375646f7270395a,0x6666666666443174\n"
".quad 0x3b33316625202c5d,0x240a3b746572090a,0x5f5f646e6557444c,0x6375646f7270395a\n"
".quad 0x6666666666443174,0x202f2f207d090a3a,0x75646f7270395a5f,0x6666666644317463\n"
".quad 0x7369762e090a0a66,0x75662e20656c6269,0x7261702e2820636e,0x203233662e206d61\n"
".quad 0x6572616475635f5f,0x6964355a5f5f6674,0x616f6c6636327473,0x5a5f20295f533374\n"
".quad 0x6636327473696435,0x205f533374616f6c,0x206d617261702e28,0x34206e67696c612e\n"
".quad 0x635f5f2038622e20,0x666d726170616475,0x736964355a5f5f31,0x74616f6c66363274\n"
".quad 0x2c5d32315b5f5333,0x206d617261702e20,0x34206e67696c612e,0x635f5f2038622e20\n"
".quad 0x666d726170616475,0x736964355a5f5f32,0x74616f6c66363274,0x295d32315b5f5333\n"
".quad 0x65722e090a7b090a,0x25203233662e2067,0x090a3b3e30323c66,0x09363109636f6c2e\n"
".quad 0x4c240a3009383531,0x5f6e696765625744,0x3274736964355a5f,0x533374616f6c6636\n"
".quad 0x702e646c090a3a5f,0x3233662e6d617261,0x5b202c3166250920,0x6170616475635f5f\n"
".quad 0x355a5f5f31666d72,0x6c66363274736964,0x302b5f533374616f,0x2e766f6d090a3b5d\n"
".quad 0x3266250920323366,0x090a3b316625202c,0x6d617261702e646c,0x662509203233662e\n"
".quad 0x75635f5f5b202c33,0x31666d7261706164,0x74736964355a5f5f,0x3374616f6c663632\n"
".quad 0x090a3b5d342b5f53,0x203233662e766f6d,0x6625202c34662509,0x702e646c090a3b33\n"
".quad 0x3233662e6d617261,0x5b202c3566250920,0x6170616475635f5f,0x355a5f5f31666d72\n"
".quad 0x6c66363274736964,0x382b5f533374616f,0x2e766f6d090a3b5d,0x3666250920323366\n"
".quad 0x090a3b356625202c,0x6d617261702e646c,0x662509203233662e,0x75635f5f5b202c37\n"
".quad 0x32666d7261706164,0x74736964355a5f5f,0x3374616f6c663632,0x090a3b5d302b5f53\n"
".quad 0x203233662e766f6d,0x6625202c38662509,0x702e646c090a3b37,0x3233662e6d617261\n"
".quad 0x5b202c3966250920,0x6170616475635f5f,0x355a5f5f32666d72,0x6c66363274736964\n"
".quad 0x342b5f533374616f,0x2e766f6d090a3b5d,0x3166250920323366,0x0a3b396625202c30\n"
".quad 0x617261702e646c09,0x2509203233662e6d,0x5f5f5b202c313166,0x6d72617061647563\n"
".quad 0x6964355a5f5f3266,0x616f6c6636327473,0x3b5d382b5f533374,0x33662e766f6d090a\n"
".quad 0x2c32316625092032,0x090a3b3131662520,0x09363109636f6c2e,0x73090a3009323631\n"
".quad 0x09203233662e6275,0x6625202c33316625,0x3b30316625202c34,0x33662e627573090a\n"
".quad 0x2c34316625092032,0x6625202c32662520,0x2e627573090a3b38,0x3166250920323366\n"
".quad 0x202c366625202c35,0x6d090a3b32316625,0x09203233662e6c75,0x6625202c36316625\n"
".quad 0x33316625202c3331,0x722e616d66090a3b,0x2509203233662e6e,0x316625202c373166\n"
".quad 0x2c34316625202c34,0x090a3b3631662520,0x662e6e722e616d66,0x3831662509203233\n"
".quad 0x202c35316625202c,0x6625202c35316625,0x2e7473090a3b3731,0x33662e6d61726170\n"
".quad 0x75635f5f5b092032,0x5f5f667465726164,0x363274736964355a,0x5f533374616f6c66\n"
".quad 0x3b38316625202c5d,0x240a3b746572090a,0x5f5f646e6557444c,0x363274736964355a\n"
".quad 0x5f533374616f6c66,0x202f2f207d090a3a,0x3274736964355a5f,0x533374616f6c6636\n"
".quad 0x7369762e090a0a5f,0x75662e20656c6269,0x7261702e2820636e,0x203233662e206d61\n"
".quad 0x6572616475635f5f,0x6964355a5f5f6674,0x616f6c6636327473,0x5a5f20295f533474\n"
".quad 0x6636327473696435,0x205f533474616f6c,0x206d617261702e28,0x31206e67696c612e\n"
".quad 0x5f5f2038622e2036,0x6d72617061647563,0x6964355a5f5f3166,0x616f6c6636327473\n"
".quad 0x5d36315b5f533474,0x6d617261702e202c,0x206e67696c612e20,0x5f2038622e203631\n"
".quad 0x726170616475635f,0x64355a5f5f32666d,0x6f6c663632747369,0x36315b5f53347461\n"
".quad 0x2e090a7b090a295d,0x3233662e20676572,0x3b3e30323c662520,0x3109636f6c2e090a\n"
".quad 0x0a30093736310936,0x6967656257444c24,0x736964355a5f5f6e,0x74616f6c66363274\n"
".quad 0x646c090a3a5f5334,0x662e6d617261702e,0x2c31662509203233,0x616475635f5f5b20\n"
".quad 0x5f5f31666d726170,0x363274736964355a,0x5f533474616f6c66,0x6f6d090a3b5d302b\n"
".quad 0x2509203233662e76,0x3b316625202c3266,0x7261702e646c090a,0x09203233662e6d61\n"
".quad 0x5f5f5b202c336625,0x6d72617061647563,0x6964355a5f5f3166,0x616f6c6636327473\n"
".quad 0x3b5d342b5f533474,0x33662e766f6d090a,0x202c346625092032,0x646c090a3b336625\n"
".quad 0x662e6d617261702e,0x2c35662509203233,0x616475635f5f5b20,0x5f5f31666d726170\n"
".quad 0x363274736964355a,0x5f533474616f6c66,0x6f6d090a3b5d382b,0x2509203233662e76\n"
".quad 0x3b356625202c3666,0x7261702e646c090a,0x09203233662e6d61,0x5f5f5b202c376625\n"
".quad 0x6d72617061647563,0x6964355a5f5f3266,0x616f6c6636327473,0x3b5d302b5f533474\n"
".quad 0x33662e766f6d090a,0x202c386625092032,0x646c090a3b376625,0x662e6d617261702e\n"
".quad 0x2c39662509203233,0x616475635f5f5b20,0x5f5f32666d726170,0x363274736964355a\n"
".quad 0x5f533474616f6c66,0x6f6d090a3b5d342b,0x2509203233662e76,0x396625202c303166\n"
".quad 0x61702e646c090a3b,0x203233662e6d6172,0x5b202c3131662509,0x6170616475635f5f\n"
".quad 0x355a5f5f32666d72,0x6c66363274736964,0x382b5f533474616f,0x2e766f6d090a3b5d\n"
".quad 0x3166250920323366,0x3b31316625202c32,0x3109636f6c2e090a,0x0a30093137310936\n"
".quad 0x3233662e62757309,0x202c333166250920,0x316625202c346625,0x2e627573090a3b30\n"
".quad 0x3166250920323366,0x202c326625202c34,0x7573090a3b386625,0x2509203233662e62\n"
".quad 0x366625202c353166,0x0a3b32316625202c,0x3233662e6c756d09,0x202c363166250920\n"
".quad 0x6625202c33316625,0x616d66090a3b3331,0x203233662e6e722e,0x25202c3731662509\n"
".quad 0x316625202c343166,0x3b36316625202c34,0x6e722e616d66090a,0x662509203233662e\n"
".quad 0x35316625202c3831,0x202c35316625202c,0x73090a3b37316625,0x2e6d617261702e74\n"
".quad 0x5f5f5b0920323366,0x6674657261647563,0x74736964355a5f5f,0x3474616f6c663632\n"
".quad 0x316625202c5d5f53,0x3b746572090a3b38,0x646e6557444c240a,0x74736964355a5f5f\n"
".quad 0x3474616f6c663632,0x2f207d090a3a5f53,0x736964355a5f202f,0x74616f6c66363274\n"
".quad 0x762e090a0a5f5334,0x2e20656c62697369,0x702e2820636e7566,0x6c612e206d617261\n"
".quad 0x622e2034206e6769,0x616475635f5f2038,0x315a5f5f66746572,0x5065637564655230\n"
".quad 0x616f6c6636726961,0x6f6c66365f533474,0x5b665f3053327461,0x315a5f20295d3231\n"
".quad 0x5065637564655230,0x616f6c6636726961,0x6f6c66365f533474,0x20665f3053327461\n"
".quad 0x206d617261702e28,0x31206e67696c612e,0x5f5f2038622e2036,0x6d72617061647563\n"
".quad 0x5230315a5f5f3166,0x6961506563756465,0x3474616f6c663672,0x74616f6c66365f53\n"
".quad 0x36315b665f305332,0x617261702e202c5d,0x6e67696c612e206d,0x2038622e20363120\n"
".quad 0x6170616475635f5f,0x315a5f5f32666d72,0x5065637564655230,0x616f6c6636726961\n"
".quad 0x6f6c66365f533474,0x5b665f3053327461,0x61702e202c5d3631,0x696c612e206d6172\n"
".quad 0x38622e2038206e67,0x70616475635f5f20,0x5a5f5f33666d7261,0x6563756465523031\n"
".quad 0x6f6c663672696150,0x6c66365f53347461,0x665f30533274616f,0x61702e202c5d385b\n"
".quad 0x696c612e206d6172,0x38622e2038206e67,0x70616475635f5f20,0x5a5f5f34666d7261\n"
".quad 0x6563756465523031,0x6f6c663672696150,0x6c66365f53347461,0x665f30533274616f\n"
".quad 0x61702e202c5d385b,0x3233662e206d6172,0x70616475635f5f20,0x5a5f5f35666d7261\n"
".quad 0x6563756465523031,0x6f6c663672696150,0x6c66365f53347461,0x665f30533274616f\n"
".quad 0x722e090a7b090a29,0x203233662e206765,0x0a3b3e31333c6625,0x363109636f6c2e09\n"
".quad 0x240a300937373109,0x6e6967656257444c,0x64655230315a5f5f,0x3672696150656375\n"
".quad 0x5f533474616f6c66,0x533274616f6c6636,0x646c090a3a665f30,0x662e6d617261702e\n"
".quad 0x2c31662509203233,0x616475635f5f5b20,0x5f5f31666d726170,0x637564655230315a\n"
".quad 0x6c66367269615065,0x66365f533474616f,0x5f30533274616f6c,0x6d090a3b5d302b66\n"
".quad 0x09203233662e766f,0x316625202c326625,0x61702e646c090a3b,0x203233662e6d6172\n"
".quad 0x5f5b202c33662509,0x726170616475635f,0x30315a5f5f31666d,0x6150656375646552\n"
".quad 0x74616f6c66367269,0x616f6c66365f5334,0x342b665f30533274,0x2e766f6d090a3b5d\n"
".quad 0x3466250920323366,0x090a3b336625202c,0x6d617261702e646c,0x662509203233662e\n"
".quad 0x75635f5f5b202c35,0x31666d7261706164,0x64655230315a5f5f,0x3672696150656375\n"
".quad 0x5f533474616f6c66,0x533274616f6c6636,0x0a3b5d382b665f30,0x3233662e766f6d09\n"
".quad 0x25202c3666250920,0x2e646c090a3b3566,0x33662e6d61726170,0x202c376625092032\n"
".quad 0x70616475635f5f5b,0x5a5f5f32666d7261,0x6563756465523031,0x6f6c663672696150\n"
".quad 0x6c66365f53347461,0x665f30533274616f,0x6f6d090a3b5d302b,0x2509203233662e76\n"
".quad 0x3b376625202c3866,0x7261702e646c090a,0x09203233662e6d61,0x5f5f5b202c396625\n"
".quad 0x6d72617061647563,0x5230315a5f5f3266,0x6961506563756465,0x3474616f6c663672\n"
".quad 0x74616f6c66365f53,0x5d342b665f305332,0x662e766f6d090a3b,0x3031662509203233\n"
".quad 0x090a3b396625202c,0x6d617261702e646c,0x662509203233662e,0x635f5f5b202c3131\n"
".quad 0x666d726170616475,0x655230315a5f5f32,0x7269615065637564,0x533474616f6c6636\n"
".quad 0x3274616f6c66365f,0x3b5d382b665f3053,0x33662e766f6d090a,0x2c32316625092032\n"
".quad 0x090a3b3131662520,0x6d617261702e646c,0x662509203233662e,0x635f5f5b202c3331\n"
".quad 0x666d726170616475,0x655230315a5f5f33,0x7269615065637564,0x533474616f6c6636\n"
".quad 0x3274616f6c66365f,0x3b5d302b665f3053,0x33662e766f6d090a,0x2c34316625092032\n"
".quad 0x090a3b3331662520,0x6d617261702e646c,0x662509203233662e,0x635f5f5b202c3531\n"
".quad 0x666d726170616475,0x655230315a5f5f34,0x7269615065637564,0x533474616f6c6636\n"
".quad 0x3274616f6c66365f,0x3b5d302b665f3053,0x33662e766f6d090a,0x2c36316625092032\n"
".quad 0x090a3b3531662520,0x6d617261702e646c,0x662509203233662e,0x635f5f5b202c3731\n"
".quad 0x666d726170616475,0x655230315a5f5f35,0x7269615065637564,0x533474616f6c6636\n"
".quad 0x3274616f6c66365f,0x090a3b5d665f3053,0x203233662e766f6d,0x25202c3831662509\n"
".quad 0x6c2e090a3b373166,0x353109363109636f,0x6c756d090a300933,0x662509203233662e\n"
".quad 0x36316625202c3931,0x0a3b30316625202c,0x2e6e722e616d6609,0x3266250920323366\n"
".quad 0x2c34316625202c30,0x6625202c34662520,0x766964090a3b3931,0x2e786f727070612e\n"
".quad 0x3266250920323366,0x2c30326625202c31,0x090a3b3831662520,0x203233662e6c756d\n"
".quad 0x25202c3232662509,0x316625202c363166,0x2e616d66090a3b32,0x09203233662e6e72\n"
".quad 0x6625202c33326625,0x2c366625202c3431,0x090a3b3232662520,0x727070612e766964\n"
".quad 0x09203233662e786f,0x6625202c34326625,0x38316625202c3332,0x09636f6c2e090a3b\n"
".quad 0x3009333831093631,0x33662e6c756d090a,0x2c35326625092032,0x6625202c38662520\n"
".quad 0x616d66090a3b3631,0x203233662e6e722e,0x25202c3632662509,0x326625202c343166\n"
".quad 0x0a3b35326625202c,0x7070612e76696409,0x203233662e786f72,0x25202c3732662509\n"
".quad 0x316625202c363266,0x702e7473090a3b38,0x3233662e6d617261,0x6475635f5f5b0920\n"
".quad 0x5a5f5f6674657261,0x6563756465523031,0x6f6c663672696150,0x6c66365f53347461\n"
".quad 0x665f30533274616f,0x326625202c5d302b,0x2e766f6d090a3b37,0x3266250920323366\n"
".quad 0x3b31326625202c38,0x7261702e7473090a,0x09203233662e6d61,0x72616475635f5f5b\n"
".quad 0x30315a5f5f667465,0x6150656375646552,0x74616f6c66367269,0x616f6c66365f5334\n"
".quad 0x342b665f30533274,0x3b38326625202c5d,0x33662e766f6d090a,0x2c39326625092032\n"
".quad 0x090a3b3432662520,0x6d617261702e7473,0x5f5b09203233662e,0x746572616475635f\n"
".quad 0x655230315a5f5f66,0x7269615065637564,0x533474616f6c6636,0x3274616f6c66365f\n"
".quad 0x2c5d382b665f3053,0x090a3b3932662520,0x444c240a3b746572,0x315a5f5f646e6557\n"
".quad 0x5065637564655230,0x616f6c6636726961,0x6f6c66365f533474,0x3a665f3053327461\n"
".quad 0x5f202f2f207d090a,0x637564655230315a,0x6c66367269615065,0x66365f533474616f\n"
".quad 0x5f30533274616f6c,0x7369762e090a0a66,0x75662e20656c6269,0x7261702e2820636e\n"
".quad 0x203233662e206d61,0x6572616475635f5f,0x6f52345a5f5f6674,0x345a5f202966746f\n"
".quad 0x2e282066746f6f52,0x662e206d61726170,0x6475635f5f203233,0x5f31666d72617061\n"
".quad 0x66746f6f52345a5f,0x722e090a7b090a29,0x203233662e206765,0x3b3e3434313c6625\n"
".quad 0x2e206765722e090a,0x3c70252064657270,0x6f6c2e090a3b3e39,0x3838310936310963\n"
".quad 0x6257444c240a3009,0x345a5f5f6e696765,0x090a3a66746f6f52,0x6d617261702e646c\n"
".quad 0x662509203233662e,0x75635f5f5b202c31,0x31666d7261706164,0x746f6f52345a5f5f\n"
".quad 0x766f6d090a3b5d66,0x662509203233662e,0x0a3b316625202c32,0x3233662e766f6d09\n"
".quad 0x30202c3366250920,0x6266303161343366,0x0920202020203b30,0x37302d6533202f2f\n"
".quad 0x6c2e70746573090a,0x2509203233662e74,0x2c326625202c3170,0x40090a3b33662520\n"
".quad 0x6172622031702521,0x5f345f744c240920,0x2e090a3b30393835,0x3109363109636f6c\n"
".quad 0x6f6d090a30093639,0x2509203233662e76,0x66336630202c3466,0x203b303030303038\n"
".quad 0x202f2f0920202020,0x662e766f6d090a31,0x2c35662509203233,0x6161616533663020\n"
".quad 0x202020203b626161,0x332e30202f2f0920,0x6d090a3333333333,0x09203233662e6c75\n"
".quad 0x356625202c366625,0x090a3b326625202c,0x203233662e627573,0x6625202c37662509\n"
".quad 0x0a3b366625202c34,0x696e752e61726209,0x5f345f744c240920,0x4c240a3b34333635\n"
".quad 0x303938355f345f74,0x662e766f6d090a3a,0x2c38662509203233,0x3030386633663020\n"
".quad 0x202020203b303030,0x090a31202f2f0920,0x2e746c2e70746573,0x3270250920323366\n"
".quad 0x25202c326625202c,0x252140090a3b3866,0x0920617262203270,0x34365f345f744c24\n"
".quad 0x6f6c2e090a3b3230,0x3530320936310963,0x2e67656e090a3009,0x3966250920323366\n"
".quad 0x090a3b326625202c,0x203233662e766f6d,0x30202c3031662509,0x3361613862663366\n"
".quad 0x2f09202020203b62,0x373234342e31202f,0x33662e6c756d090a,0x2c31316625092032\n"
".quad 0x6625202c39662520,0x327865090a3b3031,0x2e786f727070612e,0x3166250920323366\n"
".quad 0x3b31316625202c32,0x33662e766f6d090a,0x2c33316625092032,0x6161616533663020\n"
".quad 0x202020203b626161,0x33332e30202f2f09,0x6f6d090a33333333,0x2509203233662e76\n"
".quad 0x626630202c343166,0x3b64636363633465,0x202f2f0920202020,0x6f6d090a322e302d\n"
".quad 0x2509203233662e76,0x336630202c353166,0x3b35323934323964,0x202f2f0920202020\n"
".quad 0x3832343137302e30,0x662e766f6d090a36,0x3631662509203233,0x373963626630202c\n"
".quad 0x2020203b35323462,0x2e302d202f2f0920,0x0a35383135383130,0x3233662e766f6d09\n"
".quad 0x202c373166250920,0x6433383762336630,0x09202020203b6365,0x3330302e30202f2f\n"
".quad 0x6d090a3738373837,0x09203233662e766f,0x6630202c38316625,0x3336383038326162\n"
".quad 0x2f2f09202020203b,0x363030302e302d20,0x6d090a3439393034,0x09203233662e766f\n"
".quad 0x6630202c39316625,0x3832373032633833,0x2f2f09202020203b,0x37393135322e3920\n"
".quad 0x6f6d090a35302d65,0x2509203233662e76,0x626630202c303266,0x3b36626330323437\n"
".quad 0x202f2f0920202020,0x33363635312e312d,0x6f6d090a35302d65,0x2509203233662e76\n"
".quad 0x336630202c313266,0x3b35633362326135,0x202f2f0920202020,0x6533323231322e31\n"
".quad 0x766f6d090a36302d,0x662509203233662e,0x33626630202c3232,0x203b386438393362\n"
".quad 0x2d202f2f09202020,0x6534313336332e38,0x616d66090a38302d,0x203233662e6e722e\n"
".quad 0x25202c3332662509,0x326625202c323266,0x0a3b31326625202c,0x2e6e722e616d6609\n"
".quad 0x3266250920323366,0x202c326625202c34,0x6625202c33326625,0x616d66090a3b3032\n"
".quad 0x203233662e6e722e,0x25202c3532662509,0x34326625202c3266,0x0a3b39316625202c\n"
".quad 0x2e6e722e616d6609,0x3266250920323366,0x202c326625202c36,0x6625202c35326625\n"
".quad 0x616d66090a3b3831,0x203233662e6e722e,0x25202c3732662509,0x36326625202c3266\n"
".quad 0x0a3b37316625202c,0x2e6e722e616d6609,0x3266250920323366,0x202c326625202c38\n"
".quad 0x6625202c37326625,0x616d66090a3b3631,0x203233662e6e722e,0x25202c3932662509\n"
".quad 0x38326625202c3266,0x0a3b35316625202c,0x2e6e722e616d6609,0x3366250920323366\n"
".quad 0x202c326625202c30,0x6625202c39326625,0x616d66090a3b3431,0x203233662e6e722e\n"
".quad 0x25202c3133662509,0x30336625202c3266,0x0a3b33316625202c,0x3233662e64646109\n"
".quad 0x202c323366250920,0x326625202c326625,0x722e616d66090a3b,0x2509203233662e6e\n"
".quad 0x31336625202c3766,0x202c32336625202c,0x62090a3b32316625,0x0920696e752e6172\n"
".quad 0x31365f345f744c24,0x5f744c240a3b3634,0x0a3a323034365f34,0x3233662e766f6d09\n"
".quad 0x202c333366250920,0x3030303430346630,0x09202020203b3030,0x6573090a33202f2f\n"
".quad 0x33662e746c2e7074,0x202c337025092032,0x336625202c326625,0x70252140090a3b33\n"
".quad 0x2409206172622033,0x3139365f345f744c,0x636f6c2e090a3b34,0x0930313209363109\n"
".quad 0x662e766f6d090a30,0x3433662509203233,0x303030636630202c,0x2020203b30303030\n"
".quad 0x0a322d202f2f0920,0x3233662e64646109,0x202c353366250920,0x336625202c326625\n"
".quad 0x2e766f6d090a3b34,0x3366250920323366,0x6564336630202c36,0x20203b3434356663\n"
".quad 0x2e30202f2f092020,0x090a323037353131,0x203233662e766f6d,0x30202c3733662509\n"
".quad 0x3961643835646266,0x2f09202020203b31,0x3235302e302d202f,0x6f6d090a38323439\n"
".quad 0x2509203233662e76,0x336630202c383366,0x3b30656237343863,0x202f2f0920202020\n"
".quad 0x3237313631302e30,0x662e766f6d090a33,0x3933662509203233,0x383762626630202c\n"
".quad 0x2020203b63643362,0x2e302d202f2f0920,0x0a39343937333030,0x3233662e766f6d09\n"
".quad 0x202c303466250920,0x3630653361336630,0x09202020203b3637,0x3030302e30202f2f\n"
".quad 0x090a393838343237,0x203233662e766f6d,0x30202c3134662509,0x3732643466386266\n"
".quad 0x2f09202020203b38,0x3030302e302d202f,0x6d090a3437363131,0x09203233662e766f\n"
".quad 0x6630202c32346625,0x6536313438383733,0x2f2f09202020203b,0x39323432362e3120\n"
".quad 0x6f6d090a35302d65,0x2509203233662e76,0x626630202c333466,0x3b33333237353036\n"
".quad 0x202f2f0920202020,0x65353838392e312d,0x766f6d090a36302d,0x662509203233662e\n"
".quad 0x34336630202c3434,0x203b383063333936,0x32202f2f09202020,0x2d6537313237312e\n"
".quad 0x2e766f6d090a3730,0x3466250920323366,0x6232626630202c35,0x20203b3861363038\n"
".quad 0x322d202f2f092020,0x2d6534333234312e,0x2e766f6d090a3830,0x3466250920323366\n"
".quad 0x3031336630202c36,0x20203b6438366436,0x2e31202f2f092020,0x302d653531323639\n"
".quad 0x662e766f6d090a39,0x3734662509203233,0x313366616630202c,0x2020203b39346263\n"
".quad 0x2e312d202f2f0920,0x312d653330373136,0x722e616d66090a30,0x2509203233662e6e\n"
".quad 0x346625202c383466,0x2c35336625202c37,0x090a3b3634662520,0x662e6e722e616d66\n"
".quad 0x3934662509203233,0x202c35336625202c,0x6625202c38346625,0x616d66090a3b3534\n"
".quad 0x203233662e6e722e,0x25202c3035662509,0x346625202c353366,0x3b34346625202c39\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x35336625202c3135,0x202c30356625202c\n"
".quad 0x66090a3b33346625,0x33662e6e722e616d,0x2c32356625092032,0x25202c3533662520\n"
".quad 0x346625202c313566,0x2e616d66090a3b32,0x09203233662e6e72,0x6625202c33356625\n"
".quad 0x32356625202c3533,0x0a3b31346625202c,0x2e6e722e616d6609,0x3566250920323366\n"
".quad 0x2c35336625202c34,0x25202c3335662520,0x6d66090a3b303466,0x3233662e6e722e61\n"
".quad 0x202c353566250920,0x6625202c35336625,0x39336625202c3435,0x722e616d66090a3b\n"
".quad 0x2509203233662e6e,0x336625202c363566,0x2c35356625202c35,0x090a3b3833662520\n"
".quad 0x662e6e722e616d66,0x3735662509203233,0x202c35336625202c,0x6625202c36356625\n"
".quad 0x616d66090a3b3733,0x203233662e6e722e,0x25202c3835662509,0x356625202c353366\n"
".quad 0x3b36336625202c37,0x3109636f6c2e090a,0x0a30093631320936,0x3233662e67656e09\n"
".quad 0x202c393566250920,0x6f6d090a3b326625,0x2509203233662e76,0x336630202c303666\n"
".quad 0x3b62336161386266,0x202f2f0920202020,0x090a373234342e31,0x203233662e6c756d\n"
".quad 0x25202c3136662509,0x366625202c393566,0x2e327865090a3b30,0x662e786f72707061\n"
".quad 0x3236662509203233,0x0a3b31366625202c,0x3233662e64646109,0x202c333666250920\n"
".quad 0x326625202c326625,0x722e616d66090a3b,0x2509203233662e6e,0x38356625202c3766\n"
".quad 0x202c33366625202c,0x62090a3b32366625,0x0920696e752e6172,0x36365f345f744c24\n"
".quad 0x5f744c240a3b3835,0x0a3a343139365f34,0x3233662e766f6d09,0x202c343666250920\n"
".quad 0x3030306130346630,0x09202020203b3030,0x6573090a35202f2f,0x33662e746c2e7074\n"
".quad 0x202c347025092032,0x366625202c326625,0x70252140090a3b34,0x2409206172622034\n"
".quad 0x3234375f345f744c,0x636f6c2e090a3b36,0x0931323209363109,0x662e766f6d090a30\n"
".quad 0x3536662509203233,0x303830636630202c,0x2020203b30303030,0x0a342d202f2f0920\n"
".quad 0x3233662e64646109,0x202c363666250920,0x366625202c326625,0x2e766f6d090a3b35\n"
".quad 0x3666250920323366,0x3564336630202c37,0x20203b6236663638,0x2e30202f2f092020\n"
".quad 0x0a36303438323530,0x3233662e766f6d09,0x202c383666250920,0x3239663863626630\n"
".quad 0x09202020203b6233,0x31302e302d202f2f,0x6d090a3835323537,0x09203233662e766f\n"
".quad 0x6630202c39366625,0x6531346664386233,0x2f2f09202020203b,0x33333430302e3020\n"
".quad 0x766f6d090a383032,0x662509203233662e,0x61626630202c3037,0x203b643732333736\n"
".quad 0x2d202f2f09202020,0x3138383030302e30,0x766f6d090a373439,0x662509203233662e\n"
".quad 0x39336630202c3137,0x203b656131313032,0x30202f2f09202020,0x363235313030302e\n"
".quad 0x2e766f6d090a3435,0x3766250920323366,0x6337626630202c32,0x20203b3038623130\n"
".quad 0x322d202f2f092020,0x302d65313039322e,0x662e766f6d090a35,0x3337662509203233\n"
".quad 0x613436336630202c,0x2020203b30323764,0x302e33202f2f0920,0x36302d6536353232\n"
".quad 0x33662e766f6d090a,0x2c34376625092032,0x6365623462663020,0x202020203b636237\n"
".quad 0x352e332d202f2f09,0x37302d6536353335,0x33662e766f6d090a,0x2c35376625092032\n"
".quad 0x3831323333663020,0x202020203b363730,0x36372e33202f2f09,0x0a38302d65363230\n"
".quad 0x3233662e766f6d09,0x202c363766250920,0x6236383731626630,0x09202020203b3632\n"
".quad 0x31362e332d202f2f,0x0a39302d65373934,0x3233662e766f6d09,0x202c373766250920\n"
".quad 0x3332326266326630,0x09202020203b3135,0x3034322e33202f2f,0x090a30312d653133\n"
".quad 0x203233662e766f6d,0x30202c3837662509,0x3462643665646166,0x2f09202020203b61\n"
".quad 0x3432362e322d202f,0x090a31312d653435,0x662e6e722e616d66,0x3937662509203233\n"
".quad 0x202c38376625202c,0x6625202c36366625,0x616d66090a3b3737,0x203233662e6e722e\n"
".quad 0x25202c3038662509,0x376625202c363666,0x3b36376625202c39,0x6e722e616d66090a\n"
".quad 0x662509203233662e,0x36366625202c3138,0x202c30386625202c,0x66090a3b35376625\n"
".quad 0x33662e6e722e616d,0x2c32386625092032,0x25202c3636662520,0x376625202c313866\n"
".quad 0x2e616d66090a3b34,0x09203233662e6e72,0x6625202c33386625,0x32386625202c3636\n"
".quad 0x0a3b33376625202c,0x2e6e722e616d6609,0x3866250920323366,0x2c36366625202c34\n"
".quad 0x25202c3338662520,0x6d66090a3b323766,0x3233662e6e722e61,0x202c353866250920\n"
".quad 0x6625202c36366625,0x31376625202c3438,0x722e616d66090a3b,0x2509203233662e6e\n"
".quad 0x366625202c363866,0x2c35386625202c36,0x090a3b3037662520,0x662e6e722e616d66\n"
".quad 0x3738662509203233,0x202c36366625202c,0x6625202c36386625,0x616d66090a3b3936\n"
".quad 0x203233662e6e722e,0x25202c3838662509,0x386625202c363666,0x3b38366625202c37\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x36366625202c3938,0x202c38386625202c\n"
".quad 0x2e090a3b37366625,0x3209363109636f6c,0x656e090a30093732,0x2509203233662e67\n"
".quad 0x326625202c303966,0x662e766f6d090a3b,0x3139662509203233,0x386266336630202c\n"
".quad 0x2020203b62336161,0x342e31202f2f0920,0x6c756d090a373234,0x662509203233662e\n"
".quad 0x30396625202c3239,0x0a3b31396625202c,0x7070612e32786509,0x203233662e786f72\n"
".quad 0x25202c3339662509,0x6461090a3b323966,0x2509203233662e64,0x326625202c343966\n"
".quad 0x090a3b326625202c,0x662e6e722e616d66,0x2c37662509203233,0x25202c3938662520\n"
".quad 0x396625202c343966,0x2e617262090a3b33,0x744c240920696e75,0x3b303731375f345f\n"
".quad 0x375f345f744c240a,0x6f6d090a3a363234,0x2509203233662e76,0x336630202c353966\n"
".quad 0x3b33383966326166,0x202f2f0920202020,0x0a34323337322e31,0x3233662e6c756d09\n"
".quad 0x202c363966250920,0x396625202c326625,0x74727173090a3b35,0x203233662e6e722e\n"
".quad 0x25202c3739662509,0x6372090a3b363966,0x3233662e6e722e70,0x202c383966250920\n"
".quad 0x6d090a3b37396625,0x09203233662e766f,0x6630202c39396625,0x3030303030323134\n"
".quad 0x2f2f09202020203b,0x746573090a303120,0x3233662e746c2e70,0x25202c3570250920\n"
".quad 0x39396625202c3266,0x3570252140090a3b,0x4c24092061726220,0x383339375f345f74\n"
".quad 0x09636f6c2e090a3b,0x3009333332093631,0x6e722e706372090a,0x662509203233662e\n"
".quad 0x326625202c303031,0x662e67656e090a3b,0x3031662509203233,0x0a3b326625202c31\n"
".quad 0x3233662e766f6d09,0x2c32303166250920,0x6138626633663020,0x092020203b623361\n"
".quad 0x3234342e31202f2f,0x662e6c756d090a37,0x3031662509203233,0x3130316625202c33\n"
".quad 0x3b3230316625202c,0x70612e327865090a,0x3233662e786f7270,0x2c34303166250920\n"
".quad 0x0a3b333031662520,0x3233662e766f6d09,0x2c35303166250920,0x3633353662663020\n"
".quad 0x092020203b313736,0x35312e332d202f2f,0x0a36302d65313130,0x3233662e766f6d09\n"
".quad 0x2c36303166250920,0x6566666562663020,0x092020203b303262,0x39342e302d202f2f\n"
".quad 0x6f6d090a31343839,0x2509203233662e76,0x6630202c37303166,0x3466653563376533\n"
".quad 0x202f2f092020203b,0x3635343634322e30,0x33662e766f6d090a,0x3830316625092032\n"
".quad 0x386165626630202c,0x2020203b32376335,0x332e302d202f2f09,0x6f6d090a33383832\n"
".quad 0x2509203233662e76,0x6630202c39303166,0x6663313739306633,0x202f2f092020203b\n"
".quad 0x3339383633352e30,0x33662e766f6d090a,0x3031316625092032,0x333366626630202c\n"
".quad 0x2020203b62313631,0x362e302d202f2f09,0x6d090a3635353939,0x09203233662e766f\n"
".quad 0x30202c3131316625,0x3864313066653366,0x2f2f092020203b32,0x37393836342e3020\n"
".quad 0x722e616d66090a35,0x2509203233662e6e,0x6625202c32313166,0x316625202c313131\n"
".quad 0x31316625202c3030,0x2e616d66090a3b30,0x09203233662e6e72,0x25202c3331316625\n"
".quad 0x6625202c30303166,0x316625202c323131,0x616d66090a3b3930,0x203233662e6e722e\n"
".quad 0x202c343131662509,0x25202c3030316625,0x6625202c33313166,0x6d66090a3b383031\n"
".quad 0x3233662e6e722e61,0x2c35313166250920,0x202c303031662520,0x25202c3431316625\n"
".quad 0x66090a3b37303166,0x33662e6e722e616d,0x3631316625092032,0x2c3030316625202c\n"
".quad 0x202c353131662520,0x090a3b3630316625,0x662e6e722e616d66,0x3131662509203233\n"
".quad 0x3030316625202c37,0x2c3631316625202c,0x0a3b353031662520,0x2e6e722e616d6609\n"
".quad 0x3766250920323366,0x2c3430316625202c,0x202c373131662520,0x62090a3b38396625\n"
".quad 0x0920696e752e6172,0x36375f345f744c24,0x5f744c240a3b3238,0x0a3a383339375f34\n"
".quad 0x3233662e766f6d09,0x2c38313166250920,0x3030373134663020,0x092020203b303030\n"
".quad 0x73090a3531202f2f,0x662e746c2e707465,0x2c36702509203233,0x6625202c32662520\n"
".quad 0x2140090a3b383131,0x2061726220367025,0x385f345f744c2409,0x6c2e090a3b303534\n"
".quad 0x343209363109636f,0x706372090a300932,0x203233662e6e722e,0x202c393131662509\n"
".quad 0x656e090a3b326625,0x2509203233662e67,0x6625202c30323166,0x2e766f6d090a3b32\n"
".quad 0x3166250920323366,0x66336630202c3132,0x203b623361613862,0x2e31202f2f092020\n"
".quad 0x756d090a37323434,0x2509203233662e6c,0x6625202c32323166,0x316625202c303231\n"
".quad 0x327865090a3b3132,0x2e786f727070612e,0x3166250920323366,0x32316625202c3332\n"
".quad 0x2e766f6d090a3b32,0x3166250920323366,0x37626630202c3432,0x203b613539643762\n"
".quad 0x322d202f2f092020,0x2d6535363139312e,0x2e766f6d090a3530,0x3166250920323366\n"
".quad 0x65626630202c3532,0x203b646234376666,0x302d202f2f092020,0x0a3833393839342e\n"
".quad 0x3233662e766f6d09,0x2c36323166250920,0x3662366533663020,0x092020203b316366\n"
".quad 0x3932322e30202f2f,0x766f6d090a383139,0x662509203233662e,0x626630202c373231\n"
".quad 0x3b65656135303465,0x2d202f2f09202020,0x3734383738312e30,0x6e722e616d66090a\n"
".quad 0x662509203233662e,0x316625202c383231,0x31316625202c3732,0x3632316625202c39\n"
".quad 0x722e616d66090a3b,0x2509203233662e6e,0x6625202c39323166,0x316625202c393131\n"
".quad 0x32316625202c3832,0x2e616d66090a3b35,0x09203233662e6e72,0x25202c3033316625\n"
".quad 0x6625202c39313166,0x316625202c393231,0x616d66090a3b3432,0x203233662e6e722e\n"
".quad 0x6625202c37662509,0x316625202c333231,0x38396625202c3033,0x752e617262090a3b\n"
".quad 0x5f744c240920696e,0x0a3b343931385f34,0x34385f345f744c24,0x766f6d090a3a3035\n"
".quad 0x662509203233662e,0x346630202c313331,0x3b30303030343032,0x33202f2f09202020\n"
".quad 0x2e70746573090a33,0x09203233662e746c,0x326625202c377025,0x3b3133316625202c\n"
".quad 0x203770252140090a,0x744c240920617262,0x3b323639385f345f,0x3109636f6c2e090a\n"
".quad 0x0a30093035320936,0x2e6e722e70637209,0x3166250920323366,0x3b326625202c3233\n"
".quad 0x33662e67656e090a,0x3333316625092032,0x090a3b326625202c,0x203233662e766f6d\n"
".quad 0x202c343331662509,0x6161386266336630,0x2f092020203b6233,0x373234342e31202f\n"
".quad 0x33662e6c756d090a,0x3533316625092032,0x2c3333316625202c,0x0a3b343331662520\n"
".quad 0x7070612e32786509,0x203233662e786f72,0x202c363331662509,0x090a3b3533316625\n"
".quad 0x203233662e766f6d,0x202c373331662509,0x3035633738626630,0x2f092020203b3361\n"
".quad 0x3531302e362d202f,0x090a35302d653636,0x203233662e766f6d,0x202c383331662509\n"
".quad 0x3037656665626630,0x2f092020203b6338,0x3639342e302d202f,0x766f6d090a323539\n"
".quad 0x662509203233662e,0x336630202c393331,0x3b36333166383465,0x30202f2f09202020\n"
".quad 0x0a3333323639312e,0x2e6e722e616d6609,0x3166250920323366,0x33316625202c3034\n"
".quad 0x3233316625202c39,0x3b3833316625202c,0x6e722e616d66090a,0x662509203233662e\n"
".quad 0x316625202c313431,0x34316625202c3233,0x3733316625202c30,0x722e616d66090a3b\n"
".quad 0x2509203233662e6e,0x33316625202c3766,0x3134316625202c36,0x0a3b38396625202c\n"
".quad 0x696e752e61726209,0x5f345f744c240920,0x4c240a3b36303738,0x323639385f345f74\n"
".quad 0x09636f6c2e090a3a,0x3009353532093631,0x33662e766f6d090a,0x202c376625092032\n"
".quad 0x4c240a3b38396625,0x363037385f345f74,0x5f345f744c240a3a,0x4c240a3a34393138\n"
".quad 0x323836375f345f74,0x5f345f744c240a3a,0x4c240a3a30373137,0x383536365f345f74\n"
".quad 0x5f345f744c240a3a,0x4c240a3a36343136,0x343336355f345f74,0x09636f6c2e090a3a\n"
".quad 0x3009373532093631,0x33662e766f6d090a,0x3234316625092032,0x090a3b376625202c\n"
".quad 0x6d617261702e7473,0x5f5b09203233662e,0x746572616475635f,0x6f6f52345a5f5f66\n"
".quad 0x316625202c5d6674,0x746572090a3b3234,0x6e6557444c240a3b,0x6f6f52345a5f5f64\n"
".quad 0x2f207d090a3a6674,0x6f6f52345a5f202f,0x69762e090a0a6674,0x662e20656c626973\n"
".quad 0x47385a5f20636e75,0x6973657361427465,0x5f535f5369526969,0x702e28205f535f53\n"
".quad 0x33732e206d617261,0x616475635f5f2032,0x5f5f31666d726170,0x736142746547385a\n"
".quad 0x5369526969697365,0x2c5f535f535f535f,0x206d617261702e20,0x635f5f203233732e\n"
".quad 0x666d726170616475,0x746547385a5f5f32,0x6969697365736142,0x5f535f535f536952\n"
".quad 0x7261702e202c5f53,0x203233732e206d61,0x6170616475635f5f,0x385a5f5f33666d72\n"
".quad 0x7365736142746547,0x535f536952696969,0x2e202c5f535f535f,0x752e206d61726170\n"
".quad 0x6475635f5f203233,0x5f34666d72617061,0x6142746547385a5f,0x6952696969736573\n"
".quad 0x5f535f535f535f53,0x6d617261702e202c,0x5f5f203233752e20,0x6d72617061647563\n"
".quad 0x6547385a5f5f3566,0x6969736573614274,0x535f535f53695269,0x61702e202c5f535f\n"
".quad 0x3233752e206d6172,0x70616475635f5f20,0x5a5f5f36666d7261,0x6573614274654738\n"
".quad 0x5f53695269696973,0x202c5f535f535f53,0x2e206d617261702e,0x75635f5f20323375\n"
".quad 0x37666d7261706164,0x42746547385a5f5f,0x5269696973657361,0x535f535f535f5369\n"
".quad 0x617261702e202c5f,0x5f203233752e206d,0x726170616475635f,0x47385a5f5f38666d\n"
".quad 0x6973657361427465,0x5f535f5369526969,0x7b090a295f535f53,0x2e206765722e090a\n"
".quad 0x323c722520323375,0x6f6c2e090a3b3e37,0x3336320936310963,0x6257444c240a3009\n"
".quad 0x385a5f5f6e696765,0x7365736142746547,0x535f536952696969,0x090a3a5f535f535f\n"
".quad 0x6d617261702e646c,0x722509203233752e,0x75635f5f5b202c31,0x31666d7261706164\n"
".quad 0x42746547385a5f5f,0x5269696973657361,0x535f535f535f5369,0x766f6d090a3b5d5f\n"
".quad 0x722509203233732e,0x0a3b317225202c32,0x617261702e646c09,0x2509203233752e6d\n"
".quad 0x635f5f5b202c3372,0x666d726170616475,0x746547385a5f5f32,0x6969697365736142\n"
".quad 0x5f535f535f536952,0x6f6d090a3b5d5f53,0x2509203233732e76,0x3b337225202c3472\n"
".quad 0x7261702e646c090a,0x09203233752e6d61,0x5f5f5b202c357225,0x6d72617061647563\n"
".quad 0x6547385a5f5f3366,0x6969736573614274,0x535f535f53695269,0x6d090a3b5d5f535f\n"
".quad 0x09203233732e766f,0x357225202c367225,0x61702e646c090a3b,0x203233752e6d6172\n"
".quad 0x5f5b202c37722509,0x726170616475635f,0x47385a5f5f34666d,0x6973657361427465\n"
".quad 0x5f535f5369526969,0x090a3b5d5f535f53,0x203233732e766f6d,0x7225202c38722509\n"
".quad 0x702e646c090a3b37,0x3233752e6d617261,0x5b202c3972250920,0x6170616475635f5f\n"
".quad 0x385a5f5f35666d72,0x7365736142746547,0x535f536952696969,0x0a3b5d5f535f535f\n"
".quad 0x3233732e766f6d09,0x202c303172250920,0x646c090a3b397225,0x752e6d617261702e\n"
".quad 0x3131722509203233,0x6475635f5f5b202c,0x5f36666d72617061,0x6142746547385a5f\n"
".quad 0x6952696969736573,0x5f535f535f535f53,0x2e766f6d090a3b5d,0x3172250920323373\n"
".quad 0x3b31317225202c32,0x7261702e646c090a,0x09203233752e6d61,0x5f5b202c33317225\n"
".quad 0x726170616475635f,0x47385a5f5f37666d,0x6973657361427465,0x5f535f5369526969\n"
".quad 0x090a3b5d5f535f53,0x203233732e766f6d,0x25202c3431722509,0x646c090a3b333172\n"
".quad 0x752e6d617261702e,0x3531722509203233,0x6475635f5f5b202c,0x5f38666d72617061\n"
".quad 0x6142746547385a5f,0x6952696969736573,0x5f535f535f535f53,0x2e766f6d090a3b5d\n"
".quad 0x3172250920323373,0x3b35317225202c36,0x3109636f6c2e090a,0x0a30093436320936\n"
".quad 0x3233622e6c687309,0x202c373172250920,0x3b3631202c327225,0x33752e726873090a\n"
".quad 0x2c38317225092032,0x32202c3731722520,0x732e7473090a3b38,0x3172255b09203233\n"
".quad 0x7225202c5d302b30,0x6f6c2e090a3b3831,0x3536320936310963,0x2e6c6873090a3009\n"
".quad 0x3172250920323362,0x202c327225202c39,0x726873090a3b3032,0x722509203233752e\n"
".quad 0x39317225202c3032,0x73090a3b3832202c,0x5b09203233732e74,0x2c5d302b32317225\n"
".quad 0x090a3b3032722520,0x09363109636f6c2e,0x73090a3009363632,0x09203233622e6c68\n"
".quad 0x7225202c31327225,0x090a3b3432202c32,0x203233752e726873,0x25202c3232722509\n"
".quad 0x3b3832202c313272,0x3233732e7473090a,0x2b343172255b0920,0x32327225202c5d30\n"
".quad 0x09636f6c2e090a3b,0x3009373632093631,0x33622e646e61090a,0x2c33327225092032\n"
".quad 0x3531202c32722520,0x33732e7473090a3b,0x363172255b092032,0x327225202c5d302b\n"
".quad 0x636f6c2e090a3b33,0x0938363209363109,0x622e6c6873090a30,0x3432722509203233\n"
".quad 0x36202c367225202c,0x732e627573090a3b,0x3532722509203233,0x25202c347225202c\n"
".quad 0x7473090a3b343272,0x255b09203233732e,0x25202c5d302b3872,0x6c2e090a3b353272\n"
".quad 0x363209363109636f,0x746572090a300939,0x6e6557444c240a3b,0x746547385a5f5f64\n"
".quad 0x6969697365736142,0x5f535f535f536952,0x2f207d090a3a5f53,0x746547385a5f202f\n"
".quad 0x6969697365736142,0x5f535f535f536952,0x69762e090a0a5f53,0x662e20656c626973\n"
".quad 0x47355a5f20636e75,0x69696969734e7465,0x535f535f53695269,0x617261702e28205f\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x47355a5f5f31666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x617261702e202c5f,0x5f203233732e206d,0x726170616475635f\n"
".quad 0x47355a5f5f32666d,0x69696969734e7465,0x535f535f53695269,0x617261702e202c5f\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x47355a5f5f33666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x617261702e202c5f,0x5f203233732e206d,0x726170616475635f\n"
".quad 0x47355a5f5f34666d,0x69696969734e7465,0x535f535f53695269,0x617261702e202c5f\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x47355a5f5f35666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x617261702e202c5f,0x5f203233752e206d,0x726170616475635f\n"
".quad 0x47355a5f5f36666d,0x69696969734e7465,0x535f535f53695269,0x617261702e202c5f\n"
".quad 0x5f203233752e206d,0x726170616475635f,0x47355a5f5f37666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x617261702e202c5f,0x5f203233752e206d,0x726170616475635f\n"
".quad 0x47355a5f5f38666d,0x69696969734e7465,0x535f535f53695269,0x617261702e202c5f\n"
".quad 0x5f203233752e206d,0x726170616475635f,0x47355a5f5f39666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x2e090a7b090a295f,0x3233752e20676572,0x3b3e39323c722520\n"
".quad 0x2e206765722e090a,0x313c662520323366,0x6f6c2e090a3b3e31,0x3437320936310963\n"
".quad 0x6257444c240a3009,0x355a5f5f6e696765,0x696969734e746547,0x5f535f5369526969\n"
".quad 0x2e646c090a3a5f53,0x33752e6d61726170,0x202c317225092032,0x70616475635f5f5b\n"
".quad 0x5a5f5f31666d7261,0x6969734e74654735,0x535f536952696969,0x6d090a3b5d5f535f\n"
".quad 0x09203233732e766f,0x317225202c327225,0x61702e646c090a3b,0x203233752e6d6172\n"
".quad 0x5f5b202c33722509,0x726170616475635f,0x47355a5f5f33666d,0x69696969734e7465\n"
".quad 0x535f535f53695269,0x766f6d090a3b5d5f,0x722509203233732e,0x0a3b337225202c34\n"
".quad 0x617261702e646c09,0x2509203233752e6d,0x635f5f5b202c3572,0x666d726170616475\n"
".quad 0x746547355a5f5f34,0x526969696969734e,0x5d5f535f535f5369,0x732e766f6d090a3b\n"
".quad 0x2c36722509203233,0x6c090a3b35722520,0x2e6d617261702e64,0x3772250920323375\n"
".quad 0x6475635f5f5b202c,0x5f35666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x0a3b5d5f535f535f,0x3233732e766f6d09,0x25202c3872250920,0x2e646c090a3b3772\n"
".quad 0x33752e6d61726170,0x202c397225092032,0x70616475635f5f5b,0x5a5f5f36666d7261\n"
".quad 0x6969734e74654735,0x535f536952696969,0x6d090a3b5d5f535f,0x09203233732e766f\n"
".quad 0x7225202c30317225,0x702e646c090a3b39,0x3233752e6d617261,0x202c313172250920\n"
".quad 0x70616475635f5f5b,0x5a5f5f37666d7261,0x6969734e74654735,0x535f536952696969\n"
".quad 0x6d090a3b5d5f535f,0x09203233732e766f,0x7225202c32317225,0x2e646c090a3b3131\n"
".quad 0x33752e6d61726170,0x2c33317225092032,0x616475635f5f5b20,0x5f5f38666d726170\n"
".quad 0x69734e746547355a,0x5f53695269696969,0x090a3b5d5f535f53,0x203233732e766f6d\n"
".quad 0x25202c3431722509,0x646c090a3b333172,0x752e6d617261702e,0x3531722509203233\n"
".quad 0x6475635f5f5b202c,0x5f39666d72617061,0x734e746547355a5f,0x5369526969696969\n"
".quad 0x0a3b5d5f535f535f,0x3233732e766f6d09,0x202c363172250920,0x2e090a3b35317225\n"
".quad 0x3209363109636f6c,0x7663090a30093737,0x3233662e6e722e74,0x662509203233732e\n"
".quad 0x0a3b327225202c31,0x6c2e34326c756d09,0x2509203233732e6f,0x367225202c373172\n"
".quad 0x090a3b387225202c,0x6f6c2e34326c756d,0x722509203233732e,0x2c347225202c3831\n"
".quad 0x090a3b3731722520,0x662e6e722e747663,0x09203233732e3233,0x317225202c326625\n"
".quad 0x2e766964090a3b38,0x662e786f72707061,0x2c33662509203233,0x6625202c31662520\n"
".quad 0x2e747663090a3b32,0x2e3233732e697a72,0x3172250920323366,0x0a3b336625202c39\n"
".quad 0x203233732e747309,0x302b303172255b09,0x3b39317225202c5d,0x3109636f6c2e090a\n"
".quad 0x0a30093837320936,0x6c2e34326c756d09,0x2509203233732e6f,0x317225202c303272\n"
".quad 0x3b38317225202c39,0x33732e627573090a,0x2c31327225092032,0x7225202c32722520\n"
".quad 0x6f6c2e090a3b3032,0x3138320936310963,0x2e747663090a3009,0x732e3233662e6e72\n"
".quad 0x2c34662509203233,0x090a3b3132722520,0x662e6e722e747663,0x09203233732e3233\n"
".quad 0x317225202c356625,0x2e766964090a3b37,0x662e786f72707061,0x2c36662509203233\n"
".quad 0x6625202c34662520,0x2e747663090a3b35,0x2e3233732e697a72,0x3272250920323366\n"
".quad 0x0a3b366625202c32,0x203233732e747309,0x302b323172255b09,0x3b32327225202c5d\n"
".quad 0x3109636f6c2e090a,0x0a30093238320936,0x6c2e34326c756d09,0x2509203233732e6f\n"
".quad 0x327225202c333272,0x3b37317225202c32,0x33732e627573090a,0x2c34327225092032\n"
".quad 0x25202c3132722520,0x6c2e090a3b333272,0x383209363109636f,0x747663090a300935\n"
".quad 0x2e3233662e6e722e,0x3766250920323373,0x0a3b34327225202c,0x2e6e722e74766309\n"
".quad 0x203233732e323366,0x7225202c38662509,0x2e766964090a3b38,0x662e786f72707061\n"
".quad 0x2c39662509203233,0x6625202c37662520,0x2e747663090a3b38,0x2e3233732e697a72\n"
".quad 0x3272250920323366,0x0a3b396625202c35,0x203233732e747309,0x302b343172255b09\n"
".quad 0x3b35327225202c5d,0x3109636f6c2e090a,0x0a30093638320936,0x6c2e34326c756d09\n"
".quad 0x2509203233732e6f,0x327225202c363272,0x0a3b387225202c35,0x3233732e62757309\n"
".quad 0x202c373272250920,0x7225202c34327225,0x6f6c2e090a3b3632,0x3838320936310963\n"
".quad 0x732e7473090a3009,0x3172255b09203233,0x7225202c5d302b36,0x6f6c2e090a3b3732\n"
".quad 0x3938320936310963,0x3b746572090a3009,0x646e6557444c240a,0x4e746547355a5f5f\n"
".quad 0x6952696969696973,0x0a3a5f535f535f53,0x5a5f202f2f207d09,0x6969734e74654735\n"
".quad 0x535f536952696969,0x762e090a0a5f535f,0x2e20656c62697369,0x385a5f20636e7566\n"
".quad 0x736d6f7441746547,0x535f535f53695269,0x617261702e28205f,0x5f203233732e206d\n"
".quad 0x726170616475635f,0x47385a5f5f31666d,0x69736d6f74417465,0x5f535f535f536952\n"
".quad 0x6d617261702e202c,0x5f5f203233752e20,0x6d72617061647563,0x6547385a5f5f3266\n"
".quad 0x5269736d6f744174,0x2c5f535f535f5369,0x206d617261702e20,0x635f5f203233752e\n"
".quad 0x666d726170616475,0x746547385a5f5f33,0x695269736d6f7441,0x202c5f535f535f53\n"
".quad 0x2e206d617261702e,0x75635f5f20323375,0x34666d7261706164,0x41746547385a5f5f\n"
".quad 0x53695269736d6f74,0x2e202c5f535f535f,0x752e206d61726170,0x6475635f5f203233\n"
".quad 0x5f35666d72617061,0x7441746547385a5f,0x5f53695269736d6f,0x7b090a295f535f53\n"
".quad 0x2e206765722e090a,0x313c722520323375,0x6f6c2e090a3b3e38,0x3339320936310963\n"
".quad 0x6257444c240a3009,0x385a5f5f6e696765,0x736d6f7441746547,0x535f535f53695269\n"
".quad 0x702e646c090a3a5f,0x3233752e6d617261,0x5b202c3172250920,0x6170616475635f5f\n"
".quad 0x385a5f5f31666d72,0x736d6f7441746547,0x535f535f53695269,0x766f6d090a3b5d5f\n"
".quad 0x722509203233732e,0x0a3b317225202c32,0x617261702e646c09,0x2509203233752e6d\n"
".quad 0x635f5f5b202c3372,0x666d726170616475,0x746547385a5f5f32,0x695269736d6f7441\n"
".quad 0x3b5d5f535f535f53,0x33732e766f6d090a,0x202c347225092032,0x646c090a3b337225\n"
".quad 0x752e6d617261702e,0x2c35722509203233,0x616475635f5f5b20,0x5f5f33666d726170\n"
".quad 0x6f7441746547385a,0x535f53695269736d,0x6d090a3b5d5f535f,0x09203233732e766f\n"
".quad 0x357225202c367225,0x61702e646c090a3b,0x203233752e6d6172,0x5f5b202c37722509\n"
".quad 0x726170616475635f,0x47385a5f5f34666d,0x69736d6f74417465,0x5f535f535f536952\n"
".quad 0x2e766f6d090a3b5d,0x3872250920323373,0x090a3b377225202c,0x6d617261702e646c\n"
".quad 0x722509203233752e,0x75635f5f5b202c39,0x35666d7261706164,0x41746547385a5f5f\n"
".quad 0x53695269736d6f74,0x0a3b5d5f535f535f,0x3233732e766f6d09,0x202c303172250920\n"
".quad 0x6c2e090a3b397225,0x393209363109636f,0x726873090a300934,0x722509203233752e\n"
".quad 0x2c327225202c3131,0x7473090a3b343220,0x255b09203233732e,0x25202c5d302b3472\n"
".quad 0x6c2e090a3b313172,0x393209363109636f,0x6c6873090a300935,0x722509203233622e\n"
".quad 0x2c327225202c3231,0x726873090a3b3820,0x722509203233752e,0x32317225202c3331\n"
".quad 0x73090a3b3432202c,0x5b09203233732e74,0x202c5d302b367225,0x2e090a3b33317225\n"
".quad 0x3209363109636f6c,0x6873090a30093639,0x2509203233622e6c,0x327225202c343172\n"
".quad 0x73090a3b3631202c,0x09203233752e7268,0x7225202c35317225,0x0a3b3432202c3431\n"
".quad 0x203233732e747309,0x5d302b3872255b09,0x0a3b35317225202c,0x363109636f6c2e09\n"
".quad 0x090a300937393209,0x203233622e646e61,0x25202c3631722509,0x3b353532202c3272\n"
".quad 0x3233732e7473090a,0x2b303172255b0920,0x36317225202c5d30,0x09636f6c2e090a3b\n"
".quad 0x3009383932093631,0x240a3b746572090a,0x5f5f646e6557444c,0x6f7441746547385a\n"
".quad 0x535f53695269736d,0x207d090a3a5f535f,0x6547385a5f202f2f,0x5269736d6f744174\n"
".quad 0x0a5f535f535f5369,0x62697369762e090a,0x636e75662e20656c,0x74654730315a5f20\n"
".quad 0x697374657366664f,0x5f535f535f536952,0x6d617261702e2820,0x5f5f203233732e20\n"
".quad 0x6d72617061647563,0x4730315a5f5f3166,0x74657366664f7465,0x5f535f5369526973\n"
".quad 0x7261702e202c5f53,0x203233752e206d61,0x6170616475635f5f,0x315a5f5f32666d72\n"
".quad 0x7366664f74654730,0x5f53695269737465,0x702e202c5f535f53,0x33752e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f33666d726170,0x664f74654730315a,0x6952697374657366\n"
".quad 0x202c5f535f535f53,0x2e206d617261702e,0x75635f5f20323375,0x34666d7261706164\n"
".quad 0x74654730315a5f5f,0x697374657366664f,0x5f535f535f536952,0x6d617261702e202c\n"
".quad 0x5f5f203233752e20,0x6d72617061647563,0x4730315a5f5f3566,0x74657366664f7465\n"
".quad 0x5f535f5369526973,0x090a7b090a295f53,0x33752e206765722e,0x3e38313c72252032\n"
".quad 0x09636f6c2e090a3b,0x3009323033093631,0x67656257444c240a,0x4730315a5f5f6e69\n"
".quad 0x74657366664f7465,0x5f535f5369526973,0x2e646c090a3a5f53,0x33752e6d61726170\n"
".quad 0x202c317225092032,0x70616475635f5f5b,0x5a5f5f31666d7261,0x66664f7465473031\n"
".quad 0x5369526973746573,0x0a3b5d5f535f535f,0x3233732e766f6d09,0x25202c3272250920\n"
".quad 0x2e646c090a3b3172,0x33752e6d61726170,0x202c337225092032,0x70616475635f5f5b\n"
".quad 0x5a5f5f32666d7261,0x66664f7465473031,0x5369526973746573,0x0a3b5d5f535f535f\n"
".quad 0x3233732e766f6d09,0x25202c3472250920,0x2e646c090a3b3372,0x33752e6d61726170\n"
".quad 0x202c357225092032,0x70616475635f5f5b,0x5a5f5f33666d7261,0x66664f7465473031\n"
".quad 0x5369526973746573,0x0a3b5d5f535f535f,0x3233732e766f6d09,0x25202c3672250920\n"
".quad 0x2e646c090a3b3572,0x33752e6d61726170,0x202c377225092032,0x70616475635f5f5b\n"
".quad 0x5a5f5f34666d7261,0x66664f7465473031,0x5369526973746573,0x0a3b5d5f535f535f\n"
".quad 0x3233732e766f6d09,0x25202c3872250920,0x2e646c090a3b3772,0x33752e6d61726170\n"
".quad 0x202c397225092032,0x70616475635f5f5b,0x5a5f5f35666d7261,0x66664f7465473031\n"
".quad 0x5369526973746573,0x0a3b5d5f535f535f,0x3233732e766f6d09,0x202c303172250920\n"
".quad 0x6c2e090a3b397225,0x303309363109636f,0x726873090a300933,0x722509203233752e\n"
".quad 0x2c327225202c3131,0x7473090a3b343220,0x255b09203233732e,0x25202c5d302b3472\n"
".quad 0x6c2e090a3b313172,0x303309363109636f,0x6c6873090a300934,0x722509203233622e\n"
".quad 0x2c327225202c3231,0x726873090a3b3820,0x722509203233752e,0x32317225202c3331\n"
".quad 0x73090a3b3432202c,0x5b09203233732e74,0x202c5d302b367225,0x2e090a3b33317225\n"
".quad 0x3309363109636f6c,0x6873090a30093530,0x2509203233622e6c,0x327225202c343172\n"
".quad 0x73090a3b3631202c,0x09203233752e7268,0x7225202c35317225,0x0a3b3432202c3431\n"
".quad 0x203233732e747309,0x5d302b3872255b09,0x0a3b35317225202c,0x363109636f6c2e09\n"
".quad 0x090a300936303309,0x203233622e646e61,0x25202c3631722509,0x3b353532202c3272\n"
".quad 0x3233732e7473090a,0x2b303172255b0920,0x36317225202c5d30,0x09636f6c2e090a3b\n"
".quad 0x3009373033093631,0x240a3b746572090a,0x5f5f646e6557444c,0x664f74654730315a\n"
".quad 0x6952697374657366,0x0a3a5f535f535f53,0x5a5f202f2f207d09,0x66664f7465473031\n"
".quad 0x5369526973746573,0x2e090a5f535f535f,0x2e206c61626f6c67,0x7420666572786574\n"
".quad 0x3b73726f6f437865,0x61626f6c672e090a,0x65727865742e206c,0x7270537865742066\n"
".quad 0x652e090a0a3b736d,0x385a5f207972746e,0x58657475706d6f43,0x5034746e69753550\n"
".quad 0x2e09090a28206966,0x752e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061\n"
".quad 0x657475706d6f4338,0x34746e6975355058,0x6f575f645f696650,0x702e09090a2c6b72\n"
".quad 0x33752e206d617261,0x616475635f5f2032,0x385a5f5f6d726170,0x58657475706d6f43\n"
".quad 0x5034746e69753550,0x74754f5f645f6966,0x2e09090a2c747570,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x657475706d6f4338,0x34746e6975355058\n"
".quad 0x7366664f5f696650,0x090a7b090a297465,0x33752e206765722e,0x3e31373c72252032\n"
".quad 0x206765722e090a3b,0x3c6625203233662e,0x2e090a3b3e303333,0x6572702e20676572\n"
".quad 0x3e35313c70252064,0x726168732e090a3b,0x67696c612e206465,0x38622e203631206e\n"
".quad 0x5f616475635f5f20,0x61765f6c61636f6c,0x5f37373930335f72,0x635f6e6f6e5f3333\n"
".quad 0x575f735f74736e6f,0x3b5d36315b6b726f,0x65726168732e090a,0x6e67696c612e2064\n"
".quad 0x5f2038622e203420,0x5f5f5f616475635f,0x636f6c5f61647563,0x335f7261765f6c61\n"
".quad 0x5f33335f36373930,0x736e6f635f6e6f6e,0x3233617461445f74,0x090a3b5d3635325b\n"
".quad 0x09363109636f6c2e,0x444c240a30093733,0x5f5f6e6967656257,0x7475706d6f43385a\n"
".quad 0x746e697535505865,0x63090a3a69665034,0x752e3233732e7476,0x2c31722509203233\n"
".quad 0x3b782e6469742520,0x33732e766f6d090a,0x202c327225092032,0x70746573090a3b30\n"
".quad 0x203233732e71652e,0x7225202c31702509,0x0a3b327225202c31,0x617261702e646c09\n"
".quad 0x2509203233732e6d,0x635f5f5b202c3372,0x5f6d726170616475,0x75706d6f43385a5f\n"
".quad 0x6e69753550586574,0x664f5f6966503474,0x090a3b5d74657366,0x2e3233732e747663\n"
".quad 0x3472250920323375,0x646961746325202c,0x646461090a3b782e,0x722509203233732e\n"
".quad 0x202c337225202c35,0x2140090a3b347225,0x2061726220317025,0x315f395f744c2409\n"
".quad 0x2e090a3b38393430,0x3409363109636f6c,0x6c756d090a300937,0x203233752e6f6c2e\n"
".quad 0x7225202c36722509,0x090a3b3631202c35,0x6d617261702e646c,0x722509203233752e\n"
".quad 0x75635f5f5b202c37,0x5f5f6d7261706164,0x7475706d6f43385a,0x746e697535505865\n"
".quad 0x575f645f69665034,0x61090a3b5d6b726f,0x09203233752e6464,0x377225202c387225\n"
".quad 0x090a3b367225202c,0x61626f6c672e646c,0x3233752e34762e6c,0x252c3972257b0920\n"
".quad 0x313172252c303172,0x202c7d323172252c,0x3b5d302b3872255b,0x6168732e7473090a\n"
".quad 0x752e34762e646572,0x635f5f5b09203233,0x61636f6c5f616475,0x30335f7261765f6c\n"
".quad 0x6e5f33335f373739,0x74736e6f635f6e6f,0x2b6b726f575f735f,0x3972257b202c5d30\n"
".quad 0x72252c303172252c,0x7d323172252c3131,0x5f395f744c240a3b,0x090a3a3839343031\n"
".quad 0x09363109636f6c2e,0x6162090a30093834,0x0920636e79732e72,0x636f6c2e090a3b30\n"
".quad 0x3009323509363109,0x6168732e646c090a,0x203233752e646572,0x5b202c3331722509\n"
".quad 0x6c5f616475635f5f,0x7261765f6c61636f,0x335f37373930335f,0x6f635f6e6f6e5f33\n"
".quad 0x6f575f735f74736e,0x090a3b5d302b6b72,0x203233622e6c6873,0x25202c3431722509\n"
".quad 0x3b3032202c333172,0x33752e726873090a,0x2c35317225092032,0x32202c3431722520\n"
".quad 0x2e6c6873090a3b38,0x3172250920323362,0x2c33317225202c36,0x6873090a3b343220\n"
".quad 0x2509203233752e72,0x317225202c373172,0x090a3b3832202c36,0x203233622e646e61\n"
".quad 0x25202c3831722509,0x3b3531202c333172,0x6168732e646c090a,0x203233752e646572\n"
".quad 0x5b202c3931722509,0x6c5f616475635f5f,0x7261765f6c61636f,0x335f37373930335f\n"
".quad 0x6f635f6e6f6e5f33,0x6f575f735f74736e,0x0a3b5d32312b6b72,0x3233622e6c687309\n"
".quad 0x202c303272250920,0x3b36202c39317225,0x2e34326c756d090a,0x09203233732e6f6c\n"
".quad 0x7225202c31327225,0x38317225202c3731,0x622e6c6873090a3b,0x3232722509203233\n"
".quad 0x36202c357225202c,0x34326c756d090a3b,0x203233732e6f6c2e,0x25202c3332722509\n"
".quad 0x327225202c353172,0x2e646461090a3b31,0x3272250920323373,0x2c32327225202c34\n"
".quad 0x73090a3b31722520,0x09203233732e6275,0x7225202c35327225,0x30327225202c3432\n"
".quad 0x622e6c6873090a3b,0x3632722509203233,0x202c33317225202c,0x726873090a3b3631\n"
".quad 0x722509203233752e,0x36327225202c3732,0x6d090a3b3832202c,0x2e6f6c2e34326c75\n"
".quad 0x3272250920323373,0x2c37327225202c38,0x090a3b3332722520,0x2e65672e70746573\n"
".quad 0x3270250920323373,0x202c35327225202c,0x40090a3b38327225,0x2061726220327025\n"
".quad 0x315f395f744c2409,0x2e090a3b36363231,0x3209363109636f6c,0x7663090a30093837\n"
".quad 0x3233662e6e722e74,0x662509203233732e,0x3b33327225202c31,0x6e722e747663090a\n"
".quad 0x3233732e3233662e,0x25202c3266250920,0x6964090a3b353272,0x786f727070612e76\n"
".quad 0x662509203233662e,0x202c326625202c33,0x7663090a3b316625,0x33732e697a722e74\n"
".quad 0x2509203233662e32,0x336625202c393272,0x34326c756d090a3b,0x203233732e6f6c2e\n"
".quad 0x25202c3033722509,0x327225202c393272,0x2e627573090a3b33,0x3372250920323373\n"
".quad 0x2c35327225202c31,0x090a3b3033722520,0x09363109636f6c2e,0x63090a3009313832\n"
".quad 0x33662e6e722e7476,0x2509203233732e32,0x31337225202c3466,0x722e747663090a3b\n"
".quad 0x33732e3233662e6e,0x202c356625092032,0x64090a3b31327225,0x6f727070612e7669\n"
".quad 0x2509203233662e78,0x2c346625202c3666,0x63090a3b35662520,0x732e697a722e7476\n"
".quad 0x09203233662e3233,0x6625202c32337225,0x636f6c2e090a3b36,0x0932383209363109\n"
".quad 0x34326c756d090a30,0x203233732e6f6c2e,0x25202c3333722509,0x327225202c323372\n"
".quad 0x2e627573090a3b31,0x3372250920323373,0x2c31337225202c34,0x090a3b3333722520\n"
".quad 0x09363109636f6c2e,0x63090a3009353832,0x33662e6e722e7476,0x2509203233732e32\n"
".quad 0x34337225202c3766,0x722e747663090a3b,0x33732e3233662e6e,0x202c386625092032\n"
".quad 0x64090a3b38317225,0x6f727070612e7669,0x2509203233662e78,0x2c376625202c3966\n"
".quad 0x63090a3b38662520,0x732e697a722e7476,0x09203233662e3233,0x6625202c35337225\n"
".quad 0x636f6c2e090a3b39,0x0936383209363109,0x34326c756d090a30,0x203233732e6f6c2e\n"
".quad 0x25202c3633722509,0x317225202c353372,0x2e627573090a3b38,0x3372250920323373\n"
".quad 0x2c34337225202c37,0x090a3b3633722520,0x09363109636f6c2e,0x646c090a30093736\n"
".quad 0x2e6465726168732e,0x3372250920323375,0x75635f5f5b202c38,0x6c61636f6c5f6164\n"
".quad 0x3930335f7261765f,0x6f6e5f33335f3737,0x5f74736e6f635f6e,0x382b6b726f575f73\n"
".quad 0x2e6c6873090a3b5d,0x3372250920323362,0x2c38337225202c39,0x726873090a3b3820\n"
".quad 0x722509203233752e,0x39337225202c3034,0x61090a3b3432202c,0x09203233732e6464\n"
".quad 0x7225202c31347225,0x30347225202c3233,0x09636f6c2e090a3b,0x0a30093836093631\n"
".quad 0x3233622e6c687309,0x202c323472250920,0x3631202c38337225,0x752e726873090a3b\n"
".quad 0x3334722509203233,0x202c32347225202c,0x646461090a3b3432,0x722509203233732e\n"
".quad 0x35337225202c3434,0x0a3b33347225202c,0x726168732e646c09,0x09203233752e6465\n"
".quad 0x5f5b202c35347225,0x6f6c5f616475635f,0x5f7261765f6c6163,0x33335f3737393033\n"
".quad 0x6e6f635f6e6f6e5f,0x726f575f735f7473,0x73090a3b5d342b6b,0x09203233752e7268\n"
".quad 0x7225202c36347225,0x0a3b3432202c3534,0x2e6e722e74766309,0x203233732e323366\n"
".quad 0x25202c3031662509,0x6f6d090a3b363472,0x2509203233662e76,0x316625202c313166\n"
".quad 0x2e766f6d090a3b30,0x3166250920323366,0x3030306630202c32,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c333166250920,0x6d090a3b32316625\n"
".quad 0x09203233662e766f,0x6630202c34316625,0x3030303030303030,0x2f2f09202020203b\n"
".quad 0x2e766f6d090a3020,0x3166250920323366,0x3b34316625202c35,0x33662e766f6d090a\n"
".quad 0x2c36316625092032,0x3030303030663020,0x202020203b303030,0x6d090a30202f2f09\n"
".quad 0x09203233662e766f,0x6625202c37316625,0x786574090a3b3631,0x662e34762e64312e\n"
".quad 0x7b203233662e3233,0x3166252c38316625,0x252c303266252c39,0x65745b2c7d313266\n"
".quad 0x7b2c73726f6f4378,0x3166252c31316625,0x252c353166252c33,0x090a3b5d7d373166\n"
".quad 0x09363109636f6c2e,0x6f6d090a30093137,0x2509203233662e76,0x316625202c323266\n"
".quad 0x2e766f6d090a3b38,0x3266250920323366,0x3b39316625202c33,0x33662e766f6d090a\n"
".quad 0x2c34326625092032,0x090a3b3032662520,0x203233622e6c6873,0x25202c3734722509\n"
".quad 0x0a3b38202c353472,0x3233752e72687309,0x202c383472250920,0x3432202c37347225\n"
".quad 0x722e747663090a3b,0x33732e3233662e6e,0x2c35326625092032,0x090a3b3834722520\n"
".quad 0x203233662e766f6d,0x25202c3632662509,0x6f6d090a3b353266,0x2509203233662e76\n"
".quad 0x306630202c373266,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3832662509203233,0x0a3b37326625202c,0x3233662e766f6d09,0x202c393266250920\n"
".quad 0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76\n"
".quad 0x326625202c303366,0x2e766f6d090a3b39,0x3366250920323366,0x3030306630202c31\n"
".quad 0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09,0x202c323366250920\n"
".quad 0x74090a3b31336625,0x34762e64312e7865,0x3233662e3233662e,0x252c333366257b20\n"
".quad 0x353366252c343366,0x5b2c7d363366252c,0x73726f6f43786574,0x252c363266257b2c\n"
".quad 0x303366252c383266,0x3b5d7d323366252c,0x3109636f6c2e090a,0x090a300932370936\n"
".quad 0x203233662e766f6d,0x25202c3733662509,0x6f6d090a3b333366,0x2509203233662e76\n"
".quad 0x336625202c383366,0x2e766f6d090a3b34,0x3366250920323366,0x3b35336625202c39\n"
".quad 0x33622e6c6873090a,0x2c39347225092032,0x31202c3534722520,0x2e726873090a3b36\n"
".quad 0x3572250920323375,0x2c39347225202c30,0x7663090a3b343220,0x3233662e6e722e74\n"
".quad 0x662509203233732e,0x30357225202c3034,0x662e766f6d090a3b,0x3134662509203233\n"
".quad 0x0a3b30346625202c,0x3233662e766f6d09,0x202c323466250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76,0x346625202c333466\n"
".quad 0x2e766f6d090a3b32,0x3466250920323366,0x3030306630202c34,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c353466250920,0x6d090a3b34346625\n"
".quad 0x09203233662e766f,0x6630202c36346625,0x3030303030303030,0x2f2f09202020203b\n"
".quad 0x2e766f6d090a3020,0x3466250920323366,0x3b36346625202c37,0x64312e786574090a\n"
".quad 0x2e3233662e34762e,0x3466257b20323366,0x252c393466252c38,0x313566252c303566\n"
".quad 0x6f437865745b2c7d,0x3466257b2c73726f,0x252c333466252c31,0x373466252c353466\n"
".quad 0x6f6c2e090a3b5d7d,0x0933370936310963,0x662e766f6d090a30,0x3235662509203233\n"
".quad 0x0a3b38346625202c,0x3233662e766f6d09,0x202c333566250920,0x6d090a3b39346625\n"
".quad 0x09203233662e766f,0x6625202c34356625,0x646e61090a3b3035,0x722509203233622e\n"
".quad 0x35347225202c3135,0x090a3b353532202c,0x662e6e722e747663,0x09203233732e3233\n"
".quad 0x7225202c35356625,0x766f6d090a3b3135,0x662509203233662e,0x35356625202c3635\n"
".quad 0x662e766f6d090a3b,0x3735662509203233,0x303030306630202c,0x2020203b30303030\n"
".quad 0x090a30202f2f0920,0x203233662e766f6d,0x25202c3835662509,0x6f6d090a3b373566\n"
".quad 0x2509203233662e76,0x306630202c393566,0x3b30303030303030,0x202f2f0920202020\n"
".quad 0x662e766f6d090a30,0x3036662509203233,0x0a3b39356625202c,0x3233662e766f6d09\n"
".quad 0x202c313666250920,0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f\n"
".quad 0x2509203233662e76,0x366625202c323666,0x2e786574090a3b31,0x33662e34762e6431\n"
".quad 0x257b203233662e32,0x343666252c333666,0x66252c353666252c,0x7865745b2c7d3636\n"
".quad 0x257b2c73726f6f43,0x383566252c363566,0x66252c303666252c,0x2e090a3b5d7d3236\n"
".quad 0x3709363109636f6c,0x766f6d090a300934,0x662509203233662e,0x33366625202c3736\n"
".quad 0x662e766f6d090a3b,0x3836662509203233,0x0a3b34366625202c,0x3233662e766f6d09\n"
".quad 0x202c393666250920,0x2e090a3b35366625,0x3709363109636f6c,0x726873090a300935\n"
".quad 0x722509203233752e,0x38337225202c3235,0x61090a3b3432202c,0x09203233732e6464\n"
".quad 0x7225202c33357225,0x32357225202c3932,0x722e747663090a3b,0x33732e3233662e6e\n"
".quad 0x2c30376625092032,0x090a3b3335722520,0x203233662e766f6d,0x25202c3137662509\n"
".quad 0x6f6d090a3b303766,0x2509203233662e76,0x306630202c323766,0x3b30303030303030\n"
".quad 0x202f2f0920202020,0x662e766f6d090a30,0x3337662509203233,0x0a3b32376625202c\n"
".quad 0x3233662e766f6d09,0x202c343766250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x376625202c353766,0x2e766f6d090a3b34\n"
".quad 0x3766250920323366,0x3030306630202c36,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x202c373766250920,0x74090a3b36376625,0x34762e64312e7865\n"
".quad 0x3233662e3233662e,0x252c383766257b20,0x303866252c393766,0x5b2c7d313866252c\n"
".quad 0x736d727053786574,0x252c313766257b2c,0x353766252c333766,0x3b5d7d373766252c\n"
".quad 0x33662e766f6d090a,0x2c32386625092032,0x090a3b3837662520,0x203233662e766f6d\n"
".quad 0x25202c3338662509,0x7663090a3b393766,0x3233662e6e722e74,0x662509203233732e\n"
".quad 0x31347225202c3438,0x662e766f6d090a3b,0x3538662509203233,0x0a3b34386625202c\n"
".quad 0x3233662e766f6d09,0x202c363866250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x386625202c373866,0x2e766f6d090a3b36\n"
".quad 0x3866250920323366,0x3030306630202c38,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x202c393866250920,0x6d090a3b38386625,0x09203233662e766f\n"
".quad 0x6630202c30396625,0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020\n"
".quad 0x3966250920323366,0x3b30396625202c31,0x64312e786574090a,0x2e3233662e34762e\n"
".quad 0x3966257b20323366,0x252c333966252c32,0x353966252c343966,0x70537865745b2c7d\n"
".quad 0x3866257b2c736d72,0x252c373866252c35,0x313966252c393866,0x6f6c2e090a3b5d7d\n"
".quad 0x0936370936310963,0x662e766f6d090a30,0x3639662509203233,0x0a3b32396625202c\n"
".quad 0x3233662e766f6d09,0x202c373966250920,0x63090a3b33396625,0x33662e6e722e7476\n"
".quad 0x2509203233732e32,0x347225202c383966,0x2e766f6d090a3b34,0x3966250920323366\n"
".quad 0x3b38396625202c39,0x33662e766f6d090a,0x3030316625092032,0x303030306630202c\n"
".quad 0x2020203b30303030,0x6d090a30202f2f09,0x09203233662e766f,0x25202c3130316625\n"
".quad 0x6d090a3b30303166,0x09203233662e766f,0x30202c3230316625,0x3030303030303066\n"
".quad 0x2f2f092020203b30,0x2e766f6d090a3020,0x3166250920323366,0x30316625202c3330\n"
".quad 0x2e766f6d090a3b32,0x3166250920323366,0x30306630202c3430,0x203b303030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x2c35303166250920,0x0a3b343031662520\n"
".quad 0x2e64312e78657409,0x662e3233662e3476,0x303166257b203233,0x2c37303166252c36\n"
".quad 0x66252c3830316625,0x65745b2c7d393031,0x7b2c736d72705378,0x3166252c39396625\n"
".quad 0x33303166252c3130,0x5d7d35303166252c,0x09636f6c2e090a3b,0x0a30093737093631\n"
".quad 0x3233662e766f6d09,0x2c30313166250920,0x0a3b363031662520,0x3233662e766f6d09\n"
".quad 0x2c31313166250920,0x0a3b373031662520,0x3233622e646e6109,0x202c343572250920\n"
".quad 0x3532202c38337225,0x2e646461090a3b35,0x3572250920323373,0x2c37337225202c35\n"
".quad 0x090a3b3435722520,0x662e6e722e747663,0x09203233732e3233,0x25202c3231316625\n"
".quad 0x6f6d090a3b353572,0x2509203233662e76,0x6625202c33313166,0x6f6d090a3b323131\n"
".quad 0x2509203233662e76,0x6630202c34313166,0x3030303030303030,0x202f2f092020203b\n"
".quad 0x662e766f6d090a30,0x3131662509203233,0x3431316625202c35,0x662e766f6d090a3b\n"
".quad 0x3131662509203233,0x3030306630202c36,0x20203b3030303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x202c373131662509,0x090a3b3631316625,0x203233662e766f6d\n"
".quad 0x202c383131662509,0x3030303030306630,0x2f092020203b3030,0x766f6d090a30202f\n"
".quad 0x662509203233662e,0x316625202c393131,0x786574090a3b3831,0x662e34762e64312e\n"
".quad 0x7b203233662e3233,0x66252c3032316625,0x323166252c313231,0x7d33323166252c32\n"
".quad 0x7270537865745b2c,0x313166257b2c736d,0x2c35313166252c33,0x66252c3731316625\n"
".quad 0x090a3b5d7d393131,0x09363109636f6c2e,0x6f6d090a30093837,0x2509203233662e76\n"
".quad 0x6625202c34323166,0x6f6d090a3b303231,0x2509203233662e76,0x6625202c35323166\n"
".quad 0x6c2e090a3b313231,0x383809363109636f,0x2e646461090a3009,0x3166250920323366\n"
".quad 0x32386625202c3632,0x0a3b36396625202c,0x3233662e62757309,0x2c37323166250920\n"
".quad 0x25202c3332662520,0x7573090a3b383366,0x2509203233662e62,0x6625202c38323166\n"
".quad 0x37336625202c3232,0x662e627573090a3b,0x3231662509203233,0x2c34326625202c39\n"
".quad 0x090a3b3933662520,0x203233662e627573,0x202c303331662509,0x6625202c33356625\n"
".quad 0x627573090a3b3836,0x662509203233662e,0x356625202c313331,0x3b37366625202c32\n"
".quad 0x33662e627573090a,0x3233316625092032,0x202c34356625202c,0x61090a3b39366625\n"
".quad 0x09203233662e6464,0x25202c3333316625,0x6625202c30313166,0x756d090a3b343231\n"
".quad 0x2509203233662e6c,0x6625202c34333166,0x316625202c363231,0x646461090a3b3333\n"
".quad 0x662509203233662e,0x316625202c353331,0x33316625202c3632,0x2e6c756d090a3b33\n"
".quad 0x3166250920323366,0x32386625202c3633,0x0a3b36396625202c,0x7070612e76696409\n"
".quad 0x203233662e786f72,0x202c373331662509,0x25202c3633316625,0x6d090a3b36323166\n"
".quad 0x09203233662e6c75,0x25202c3833316625,0x6625202c37323166,0x6d66090a3b373231\n"
".quad 0x3233662e6e722e61,0x2c39333166250920,0x202c383231662520,0x25202c3832316625\n"
".quad 0x66090a3b38333166,0x33662e6e722e616d,0x3034316625092032,0x2c3932316625202c\n"
".quad 0x202c393231662520,0x090a3b3933316625,0x203233662e6c756d,0x202c313431662509\n"
".quad 0x25202c3733316625,0x6d090a3b30343166,0x09203233662e6c75,0x25202c3234316625\n"
".quad 0x6625202c30333166,0x6d66090a3b303331,0x3233662e6e722e61,0x2c33343166250920\n"
".quad 0x202c313331662520,0x25202c3133316625,0x66090a3b32343166,0x33662e6e722e616d\n"
".quad 0x3434316625092032,0x2c3233316625202c,0x202c323331662520,0x090a3b3334316625\n"
".quad 0x203233662e6c756d,0x202c353431662509,0x25202c3031316625,0x64090a3b34323166\n"
".quad 0x6f727070612e7669,0x2509203233662e78,0x6625202c36343166,0x316625202c353431\n"
".quad 0x616d66090a3b3333,0x203233662e6e722e,0x202c373431662509,0x25202c3434316625\n"
".quad 0x6625202c36343166,0x656e090a3b313431,0x2509203233662e67,0x6625202c38343166\n"
".quad 0x6f6d090a3b373431,0x2509203233662e76,0x6630202c39343166,0x6233616138626633\n"
".quad 0x202f2f092020203b,0x090a373234342e31,0x203233662e6c756d,0x202c303531662509\n"
".quad 0x25202c3834316625,0x65090a3b39343166,0x6f727070612e3278,0x2509203233662e78\n"
".quad 0x6625202c31353166,0x756d090a3b303531,0x2509203233662e6c,0x6625202c32353166\n"
".quad 0x37396625202c3338,0x662e6c756d090a3b,0x3531662509203233,0x3131316625202c33\n"
".quad 0x3b3235316625202c,0x33662e6c756d090a,0x3435316625092032,0x2c3532316625202c\n"
".quad 0x0a3b333531662520,0x3233662e6c756d09,0x2c35353166250920,0x202c313531662520\n"
".quad 0x090a3b3435316625,0x727070612e766964,0x09203233662e786f,0x25202c3635316625\n"
".quad 0x6625202c35353166,0x7173090a3b343331,0x33662e6e722e7472,0x3735316625092032\n"
".quad 0x3b3533316625202c,0x6e722e706372090a,0x662509203233662e,0x316625202c383531\n"
".quad 0x6c756d090a3b3735,0x662509203233662e,0x316625202c393531,0x35316625202c3635\n"
".quad 0x2e6c756d090a3b38,0x3166250920323366,0x35316625202c3036,0x3935316625202c39\n"
".quad 0x662e766f6d090a3b,0x3631662509203233,0x3439316630202c31,0x20203b6139643631\n"
".quad 0x2d6531202f2f0920,0x70746573090a3332,0x203233662e74672e,0x6625202c33702509\n"
".quad 0x316625202c303631,0x252140090a3b3136,0x0920617262203370,0x31315f395f744c24\n"
".quad 0x6c2e090a3b383737,0x393909363109636f,0x2e6c756d090a3009,0x3166250920323366\n"
".quad 0x36396625202c3236,0x0a3b38336625202c,0x3233662e6c756d09,0x2c33363166250920\n"
".quad 0x202c343231662520,0x6d090a3b38366625,0x09203233662e6c75,0x25202c3436316625\n"
".quad 0x396625202c373366,0x2e6c756d090a3b36,0x3166250920323366,0x37366625202c3536\n"
".quad 0x3b3432316625202c,0x33662e6c756d090a,0x3636316625092032,0x202c36396625202c\n"
".quad 0x6d090a3b39336625,0x09203233662e6c75,0x25202c3736316625,0x6625202c34323166\n"
".quad 0x616d66090a3b3936,0x203233662e6e722e,0x202c383631662509,0x6625202c32386625\n"
".quad 0x36316625202c3332,0x2e616d66090a3b32,0x09203233662e6e72,0x25202c3936316625\n"
".quad 0x6625202c30313166,0x36316625202c3335,0x2e616d66090a3b33,0x09203233662e6e72\n"
".quad 0x25202c3037316625,0x386625202c323266,0x3436316625202c32,0x722e616d66090a3b\n"
".quad 0x2509203233662e6e,0x6625202c31373166,0x31316625202c3235,0x3536316625202c30\n"
".quad 0x722e616d66090a3b,0x2509203233662e6e,0x6625202c32373166,0x34326625202c3238\n"
".quad 0x3b3636316625202c,0x6e722e616d66090a,0x662509203233662e,0x316625202c333731\n"
".quad 0x34356625202c3031,0x3b3736316625202c,0x70612e766964090a,0x3233662e786f7270\n"
".quad 0x2c34373166250920,0x202c343331662520,0x090a3b3533316625,0x727070612e766964\n"
".quad 0x09203233662e786f,0x25202c3537316625,0x6625202c38363166,0x6964090a3b363231\n"
".quad 0x786f727070612e76,0x662509203233662e,0x316625202c363731,0x33316625202c3936\n"
".quad 0x2e766964090a3b33,0x662e786f72707061,0x3731662509203233,0x3037316625202c37\n"
".quad 0x3b3632316625202c,0x70612e766964090a,0x3233662e786f7270,0x2c38373166250920\n"
".quad 0x202c313731662520,0x090a3b3333316625,0x727070612e766964,0x09203233662e786f\n"
".quad 0x25202c3937316625,0x6625202c32373166,0x6964090a3b363231,0x786f727070612e76\n"
".quad 0x662509203233662e,0x316625202c303831,0x33316625202c3337,0x2e627573090a3b33\n"
".quad 0x3166250920323366,0x37316625202c3138,0x3637316625202c35,0x662e627573090a3b\n"
".quad 0x3831662509203233,0x3737316625202c32,0x3b3837316625202c,0x33662e627573090a\n"
".quad 0x3338316625092032,0x2c3937316625202c,0x0a3b303831662520,0x3233662e6c756d09\n"
".quad 0x2c34383166250920,0x202c313831662520,0x090a3b3138316625,0x662e6e722e616d66\n"
".quad 0x3831662509203233,0x3238316625202c35,0x2c3238316625202c,0x0a3b343831662520\n"
".quad 0x2e6e722e616d6609,0x3166250920323366,0x38316625202c3638,0x3338316625202c33\n"
".quad 0x3b3538316625202c,0x33662e6c756d090a,0x3738316625092032,0x2c3437316625202c\n"
".quad 0x0a3b363831662520,0x3233662e766f6d09,0x2c38383166250920,0x3031613433663020\n"
".quad 0x092020203b306266,0x37302d6533202f2f,0x6c2e70746573090a,0x2509203233662e74\n"
".quad 0x38316625202c3470,0x3838316625202c37,0x3470252140090a3b,0x4c24092061726220\n"
".quad 0x393232315f395f74,0x636f6c2e090a3b30,0x0936393109363109,0x662e766f6d090a30\n"
".quad 0x3831662509203233,0x3866336630202c39,0x20203b3030303030,0x090a31202f2f0920\n"
".quad 0x203233662e766f6d,0x202c303931662509,0x6161616165336630,0x2f092020203b6261\n"
".quad 0x333333332e30202f,0x2e6c756d090a3333,0x3166250920323366,0x39316625202c3139\n"
".quad 0x3738316625202c30,0x662e627573090a3b,0x3931662509203233,0x3938316625202c32\n"
".quad 0x3b3139316625202c,0x6e752e617262090a,0x395f744c24092069,0x0a3b36303135315f\n"
".quad 0x32315f395f744c24,0x6f6d090a3a303932,0x2509203233662e76,0x6630202c33393166\n"
".quad 0x3030303030386633,0x202f2f092020203b,0x2e70746573090a31,0x09203233662e746c\n"
".quad 0x316625202c357025,0x39316625202c3738,0x70252140090a3b33,0x2409206172622035\n"
".quad 0x3832315f395f744c,0x6f6c2e090a3b3230,0x3030320936310963,0x2e766f6d090a3009\n"
".quad 0x3166250920323366,0x65336630202c3439,0x203b626161616161,0x2e30202f2f092020\n"
".quad 0x090a333333333333,0x203233662e766f6d,0x202c353931662509,0x6363633465626630\n"
".quad 0x2f092020203b6463,0x090a322e302d202f,0x203233662e766f6d,0x202c363931662509\n"
".quad 0x3934323964336630,0x2f092020203b3532,0x343137302e30202f,0x766f6d090a363832\n"
".quad 0x662509203233662e,0x626630202c373931,0x3b35323462373963,0x2d202f2f09202020\n"
".quad 0x3831353831302e30,0x662e766f6d090a35,0x3931662509203233,0x3762336630202c38\n"
".quad 0x20203b6365643338,0x302e30202f2f0920,0x0a37383738373330,0x3233662e766f6d09\n"
".quad 0x2c39393166250920,0x3038326162663020,0x092020203b333638,0x30302e302d202f2f\n"
".quad 0x0a34393930343630,0x3233662e766f6d09,0x2c30303266250920,0x3032633833663020\n"
".quad 0x092020203b383237,0x3135322e39202f2f,0x090a35302d653739,0x203233662e766f6d\n"
".quad 0x202c313032662509,0x6330323437626630,0x2f092020203b3662,0x3635312e312d202f\n"
".quad 0x090a35302d653336,0x203233662e766f6d,0x202c323032662509,0x3362326135336630\n"
".quad 0x2f092020203b3563,0x323231322e31202f,0x6d090a36302d6533,0x09203233662e766f\n"
".quad 0x30202c3330326625,0x6438393362336266,0x2f2f092020203b38,0x313336332e382d20\n"
".quad 0x66090a38302d6534,0x33662e6e722e616d,0x3430326625092032,0x2c3330326625202c\n"
".quad 0x202c373831662520,0x090a3b3230326625,0x662e6e722e616d66,0x3032662509203233\n"
".quad 0x3738316625202c35,0x2c3430326625202c,0x0a3b313032662520,0x2e6e722e616d6609\n"
".quad 0x3266250920323366,0x38316625202c3630,0x3530326625202c37,0x3b3030326625202c\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x316625202c373032,0x30326625202c3738\n"
".quad 0x3939316625202c36,0x722e616d66090a3b,0x2509203233662e6e,0x6625202c38303266\n"
".quad 0x326625202c373831,0x39316625202c3730,0x2e616d66090a3b38,0x09203233662e6e72\n"
".quad 0x25202c3930326625,0x6625202c37383166,0x316625202c383032,0x616d66090a3b3739\n"
".quad 0x203233662e6e722e,0x202c303132662509,0x25202c3738316625,0x6625202c39303266\n"
".quad 0x6d66090a3b363931,0x3233662e6e722e61,0x2c31313266250920,0x202c373831662520\n"
".quad 0x25202c3031326625,0x66090a3b35393166,0x33662e6e722e616d,0x3231326625092032\n"
".quad 0x2c3738316625202c,0x202c313132662520,0x090a3b3439316625,0x09303209636f6c2e\n"
".quad 0x6e090a3009333035,0x09203233662e6765,0x25202c3331326625,0x6d090a3b37383166\n"
".quad 0x09203233662e766f,0x30202c3431326625,0x3361613862663366,0x2f2f092020203b62\n"
".quad 0x0a373234342e3120,0x3233662e6c756d09,0x2c35313266250920,0x202c333132662520\n"
".quad 0x090a3b3431326625,0x727070612e327865,0x09203233662e786f,0x25202c3631326625\n"
".quad 0x2e090a3b35313266,0x3209363109636f6c,0x6461090a30093530,0x2509203233662e64\n"
".quad 0x6625202c37313266,0x316625202c373831,0x616d66090a3b3738,0x203233662e6e722e\n"
".quad 0x202c323931662509,0x25202c3231326625,0x6625202c37313266,0x7262090a3b363132\n"
".quad 0x240920696e752e61,0x3135315f395f744c,0x5f744c240a3b3630,0x3a32303832315f39\n"
".quad 0x33662e766f6d090a,0x3831326625092032,0x303430346630202c,0x2020203b30303030\n"
".quad 0x73090a33202f2f09,0x662e746c2e707465,0x2c36702509203233,0x202c373831662520\n"
".quad 0x090a3b3831326625,0x7262203670252140,0x395f744c24092061,0x0a3b34313333315f\n"
".quad 0x363109636f6c2e09,0x090a300930313209,0x203233662e766f6d,0x202c393132662509\n"
".quad 0x3030303030636630,0x2f092020203b3030,0x6461090a322d202f,0x2509203233662e64\n"
".quad 0x6625202c30323266,0x326625202c373831,0x766f6d090a3b3931,0x662509203233662e\n"
".quad 0x336630202c313232,0x3b34343566636564,0x30202f2f09202020,0x0a3230373531312e\n"
".quad 0x3233662e766f6d09,0x2c32323266250920,0x6438356462663020,0x092020203b313961\n"
".quad 0x35302e302d202f2f,0x6d090a3832343932,0x09203233662e766f,0x30202c3332326625\n"
".quad 0x6562373438633366,0x2f2f092020203b30,0x37313631302e3020,0x2e766f6d090a3332\n"
".quad 0x3266250920323366,0x62626630202c3432,0x203b636433623837,0x302d202f2f092020\n"
".quad 0x393439373330302e,0x33662e766f6d090a,0x3532326625092032,0x653361336630202c\n"
".quad 0x2020203b36373630,0x30302e30202f2f09,0x0a39383834323730,0x3233662e766f6d09\n"
".quad 0x2c36323266250920,0x6434663862663020,0x092020203b383732,0x30302e302d202f2f\n"
".quad 0x090a343736313130,0x203233662e766f6d,0x202c373232662509,0x3134383837336630\n"
".quad 0x2f092020203b6536,0x323432362e31202f,0x6d090a35302d6539,0x09203233662e766f\n"
".quad 0x30202c3832326625,0x3332373530366266,0x2f2f092020203b33,0x353838392e312d20\n"
".quad 0x6f6d090a36302d65,0x2509203233662e76,0x6630202c39323266,0x3830633339363433\n"
".quad 0x202f2f092020203b,0x6537313237312e32,0x766f6d090a37302d,0x662509203233662e\n"
".quad 0x626630202c303332,0x3b38613630386232,0x2d202f2f09202020,0x6534333234312e32\n"
".quad 0x766f6d090a38302d,0x662509203233662e,0x336630202c313332,0x3b64383664363031\n"
".quad 0x31202f2f09202020,0x2d6535313236392e,0x2e766f6d090a3930,0x3266250920323366\n"
".quad 0x66616630202c3233,0x203b393462633133,0x312d202f2f092020,0x2d6533303731362e\n"
".quad 0x2e616d66090a3031,0x09203233662e6e72,0x25202c3333326625,0x6625202c32333266\n"
".quad 0x326625202c303232,0x616d66090a3b3133,0x203233662e6e722e,0x202c343332662509\n"
".quad 0x25202c3032326625,0x6625202c33333266,0x6d66090a3b303332,0x3233662e6e722e61\n"
".quad 0x2c35333266250920,0x202c303232662520,0x25202c3433326625,0x66090a3b39323266\n"
".quad 0x33662e6e722e616d,0x3633326625092032,0x2c3032326625202c,0x202c353332662520\n"
".quad 0x090a3b3832326625,0x662e6e722e616d66,0x3332662509203233,0x3032326625202c37\n"
".quad 0x2c3633326625202c,0x0a3b373232662520,0x2e6e722e616d6609,0x3266250920323366\n"
".quad 0x32326625202c3833,0x3733326625202c30,0x3b3632326625202c,0x6e722e616d66090a\n"
".quad 0x662509203233662e,0x326625202c393332,0x33326625202c3032,0x3532326625202c38\n"
".quad 0x722e616d66090a3b,0x2509203233662e6e,0x6625202c30343266,0x326625202c303232\n"
".quad 0x32326625202c3933,0x2e616d66090a3b34,0x09203233662e6e72,0x25202c3134326625\n"
".quad 0x6625202c30323266,0x326625202c303432,0x616d66090a3b3332,0x203233662e6e722e\n"
".quad 0x202c323432662509,0x25202c3032326625,0x6625202c31343266,0x6d66090a3b323232\n"
".quad 0x3233662e6e722e61,0x2c33343266250920,0x202c303232662520,0x25202c3234326625\n"
".quad 0x2e090a3b31323266,0x3509303209636f6c,0x656e090a30093330,0x2509203233662e67\n"
".quad 0x6625202c34343266,0x6f6d090a3b373831,0x2509203233662e76,0x6630202c35343266\n"
".quad 0x6233616138626633,0x202f2f092020203b,0x090a373234342e31,0x203233662e6c756d\n"
".quad 0x202c363432662509,0x25202c3434326625,0x65090a3b35343266,0x6f727070612e3278\n"
".quad 0x2509203233662e78,0x6625202c36313266,0x6c2e090a3b363432,0x313209363109636f\n"
".quad 0x646461090a300936,0x662509203233662e,0x316625202c373432,0x38316625202c3738\n"
".quad 0x2e616d66090a3b37,0x09203233662e6e72,0x25202c3239316625,0x6625202c33343266\n"
".quad 0x326625202c373432,0x617262090a3b3631,0x4c240920696e752e,0x303135315f395f74\n"
".quad 0x395f744c240a3b36,0x0a3a34313333315f,0x3233662e766f6d09,0x2c38343266250920\n"
".quad 0x3030613034663020,0x092020203b303030,0x6573090a35202f2f,0x33662e746c2e7074\n"
".quad 0x202c377025092032,0x25202c3738316625,0x40090a3b38343266,0x6172622037702521\n"
".quad 0x5f395f744c240920,0x090a3b3632383331,0x09363109636f6c2e,0x6d090a3009313232\n"
".quad 0x09203233662e766f,0x30202c3934326625,0x3030303038306366,0x2f2f092020203b30\n"
".quad 0x646461090a342d20,0x662509203233662e,0x316625202c303532,0x34326625202c3738\n"
".quad 0x2e766f6d090a3b39,0x3266250920323366,0x64336630202c3135,0x203b623666363835\n"
".quad 0x2e30202f2f092020,0x0a36303438323530,0x3233662e766f6d09,0x2c32353266250920\n"
".quad 0x3966386362663020,0x092020203b623332,0x31302e302d202f2f,0x6d090a3835323537\n"
".quad 0x09203233662e766f,0x30202c3335326625,0x3134666438623366,0x2f2f092020203b65\n"
".quad 0x33333430302e3020,0x766f6d090a383032,0x662509203233662e,0x626630202c343532\n"
".quad 0x3b64373233373661,0x2d202f2f09202020,0x3138383030302e30,0x766f6d090a373439\n"
".quad 0x662509203233662e,0x336630202c353532,0x3b65613131303239,0x30202f2f09202020\n"
".quad 0x363235313030302e,0x2e766f6d090a3435,0x3266250920323366,0x37626630202c3635\n"
".quad 0x203b303862313063,0x322d202f2f092020,0x302d65313039322e,0x662e766f6d090a35\n"
".quad 0x3532662509203233,0x3436336630202c37,0x20203b3032376461,0x302e33202f2f0920\n"
".quad 0x36302d6536353232,0x33662e766f6d090a,0x3835326625092032,0x656234626630202c\n"
".quad 0x2020203b63623763,0x352e332d202f2f09,0x37302d6536353335,0x33662e766f6d090a\n"
".quad 0x3935326625092032,0x313233336630202c,0x2020203b36373038,0x36372e33202f2f09\n"
".quad 0x0a38302d65363230,0x3233662e766f6d09,0x2c30363266250920,0x3638373162663020\n"
".quad 0x092020203b363262,0x31362e332d202f2f,0x0a39302d65373934,0x3233662e766f6d09\n"
".quad 0x2c31363266250920,0x3232626632663020,0x092020203b313533,0x3034322e33202f2f\n"
".quad 0x090a30312d653133,0x203233662e766f6d,0x202c323632662509,0x6264366564616630\n"
".quad 0x2f092020203b6134,0x3432362e322d202f,0x090a31312d653435,0x662e6e722e616d66\n"
".quad 0x3632662509203233,0x3236326625202c33,0x2c3035326625202c,0x0a3b313632662520\n"
".quad 0x2e6e722e616d6609,0x3266250920323366,0x35326625202c3436,0x3336326625202c30\n"
".quad 0x3b3036326625202c,0x6e722e616d66090a,0x662509203233662e,0x326625202c353632\n"
".quad 0x36326625202c3035,0x3935326625202c34,0x722e616d66090a3b,0x2509203233662e6e\n"
".quad 0x6625202c36363266,0x326625202c303532,0x35326625202c3536,0x2e616d66090a3b38\n"
".quad 0x09203233662e6e72,0x25202c3736326625,0x6625202c30353266,0x326625202c363632\n"
".quad 0x616d66090a3b3735,0x203233662e6e722e,0x202c383632662509,0x25202c3035326625\n"
".quad 0x6625202c37363266,0x6d66090a3b363532,0x3233662e6e722e61,0x2c39363266250920\n"
".quad 0x202c303532662520,0x25202c3836326625,0x66090a3b35353266,0x33662e6e722e616d\n"
".quad 0x3037326625092032,0x2c3035326625202c,0x202c393632662520,0x090a3b3435326625\n"
".quad 0x662e6e722e616d66,0x3732662509203233,0x3035326625202c31,0x2c3037326625202c\n"
".quad 0x0a3b333532662520,0x2e6e722e616d6609,0x3266250920323366,0x35326625202c3237\n"
".quad 0x3137326625202c30,0x3b3235326625202c,0x6e722e616d66090a,0x662509203233662e\n"
".quad 0x326625202c333732,0x37326625202c3035,0x3135326625202c32,0x09636f6c2e090a3b\n"
".quad 0x3009333035093032,0x33662e67656e090a,0x3437326625092032,0x3b3738316625202c\n"
".quad 0x33662e766f6d090a,0x3537326625092032,0x386266336630202c,0x2020203b62336161\n"
".quad 0x34342e31202f2f09,0x2e6c756d090a3732,0x3266250920323366,0x37326625202c3637\n"
".quad 0x3537326625202c34,0x612e327865090a3b,0x33662e786f727070,0x3631326625092032\n"
".quad 0x3b3637326625202c,0x3109636f6c2e090a,0x0a30093732320936,0x3233662e64646109\n"
".quad 0x2c37373266250920,0x202c373831662520,0x090a3b3738316625,0x662e6e722e616d66\n"
".quad 0x3931662509203233,0x3337326625202c32,0x2c3737326625202c,0x0a3b363132662520\n"
".quad 0x696e752e61726209,0x5f395f744c240920,0x240a3b3630313531,0x3833315f395f744c\n"
".quad 0x766f6d090a3a3632,0x662509203233662e,0x336630202c383732,0x3b33383966326166\n"
".quad 0x31202f2f09202020,0x090a34323337322e,0x203233662e6c756d,0x202c393732662509\n"
".quad 0x25202c3738316625,0x73090a3b38373266,0x662e6e722e747271,0x3832662509203233\n"
".quad 0x3937326625202c30,0x722e706372090a3b,0x2509203233662e6e,0x6625202c31383266\n"
".quad 0x6f6d090a3b303832,0x2509203233662e76,0x6630202c32383266,0x3030303030323134\n"
".quad 0x202f2f092020203b,0x70746573090a3031,0x203233662e746c2e,0x6625202c38702509\n"
".quad 0x326625202c373831,0x252140090a3b3238,0x0920617262203870,0x34315f395f744c24\n"
".quad 0x6c2e090a3b383333,0x303509303209636f,0x67656e090a300933,0x662509203233662e\n"
".quad 0x316625202c333832,0x766f6d090a3b3738,0x662509203233662e,0x336630202c343832\n"
".quad 0x3b62336161386266,0x31202f2f09202020,0x6d090a373234342e,0x09203233662e6c75\n"
".quad 0x25202c3538326625,0x6625202c33383266,0x7865090a3b343832,0x786f727070612e32\n"
".quad 0x662509203233662e,0x326625202c363132,0x6f6c2e090a3b3538,0x3333320936310963\n"
".quad 0x2e706372090a3009,0x09203233662e6e72,0x25202c3638326625,0x6d090a3b37383166\n"
".quad 0x09203233662e766f,0x30202c3738326625,0x3736363335366266,0x2f2f092020203b31\n"
".quad 0x313035312e332d20,0x6d090a36302d6531,0x09203233662e766f,0x30202c3838326625\n"
".quad 0x3262656666656266,0x2f2f092020203b30,0x383939342e302d20,0x2e766f6d090a3134\n"
".quad 0x3266250920323366,0x65336630202c3938,0x203b346665356337,0x2e30202f2f092020\n"
".quad 0x090a363534363432,0x203233662e766f6d,0x202c303932662509,0x6335386165626630\n"
".quad 0x2f092020203b3237,0x3832332e302d202f,0x2e766f6d090a3338,0x3266250920323366\n"
".quad 0x66336630202c3139,0x203b666331373930,0x2e30202f2f092020,0x090a333938363335\n"
".quad 0x203233662e766f6d,0x202c323932662509,0x3631333366626630,0x2f092020203b6231\n"
".quad 0x3939362e302d202f,0x766f6d090a363535,0x662509203233662e,0x336630202c333932\n"
".quad 0x3b32386431306665,0x30202f2f09202020,0x0a3537393836342e,0x2e6e722e616d6609\n"
".quad 0x3266250920323366,0x39326625202c3439,0x3638326625202c33,0x3b3239326625202c\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x326625202c353932,0x39326625202c3638\n"
".quad 0x3139326625202c34,0x722e616d66090a3b,0x2509203233662e6e,0x6625202c36393266\n"
".quad 0x326625202c363832,0x39326625202c3539,0x2e616d66090a3b30,0x09203233662e6e72\n"
".quad 0x25202c3739326625,0x6625202c36383266,0x326625202c363932,0x616d66090a3b3938\n"
".quad 0x203233662e6e722e,0x202c383932662509,0x25202c3638326625,0x6625202c37393266\n"
".quad 0x6d66090a3b383832,0x3233662e6e722e61,0x2c39393266250920,0x202c363832662520\n"
".quad 0x25202c3839326625,0x66090a3b37383266,0x33662e6e722e616d,0x3239316625092032\n"
".quad 0x2c3631326625202c,0x202c393932662520,0x090a3b3138326625,0x20696e752e617262\n"
".quad 0x315f395f744c2409,0x4c240a3b36303135,0x333334315f395f74,0x2e766f6d090a3a38\n"
".quad 0x3366250920323366,0x31346630202c3030,0x203b303030303037,0x3531202f2f092020\n"
".quad 0x6c2e70746573090a,0x2509203233662e74,0x38316625202c3970,0x3030336625202c37\n"
".quad 0x3970252140090a3b,0x4c24092061726220,0x353834315f395f74,0x636f6c2e090a3b30\n"
".quad 0x0933303509303209,0x662e67656e090a30,0x3033662509203233,0x3738316625202c31\n"
".quad 0x662e766f6d090a3b,0x3033662509203233,0x6266336630202c32,0x20203b6233616138\n"
".quad 0x342e31202f2f0920,0x6c756d090a373234,0x662509203233662e,0x336625202c333033\n"
".quad 0x30336625202c3130,0x2e327865090a3b32,0x662e786f72707061,0x3132662509203233\n"
".quad 0x3330336625202c36,0x09636f6c2e090a3b,0x3009323432093631,0x6e722e706372090a\n"
".quad 0x662509203233662e,0x316625202c343033,0x766f6d090a3b3738,0x662509203233662e\n"
".quad 0x626630202c353033,0x3b61353964376237,0x2d202f2f09202020,0x6535363139312e32\n"
".quad 0x766f6d090a35302d,0x662509203233662e,0x626630202c363033,0x3b64623437666665\n"
".quad 0x2d202f2f09202020,0x3833393839342e30,0x33662e766f6d090a,0x3730336625092032\n"
".quad 0x623665336630202c,0x2020203b31636636,0x32322e30202f2f09,0x6f6d090a38313939\n"
".quad 0x2509203233662e76,0x6630202c38303366,0x6565613530346562,0x202f2f092020203b\n"
".quad 0x34383738312e302d,0x722e616d66090a37,0x2509203233662e6e,0x6625202c39303366\n"
".quad 0x336625202c383033,0x30336625202c3430,0x2e616d66090a3b37,0x09203233662e6e72\n"
".quad 0x25202c3031336625,0x6625202c34303366,0x336625202c393033,0x616d66090a3b3630\n"
".quad 0x203233662e6e722e,0x202c313133662509,0x25202c3430336625,0x6625202c30313366\n"
".quad 0x6d66090a3b353033,0x3233662e6e722e61,0x2c32393166250920,0x202c363132662520\n"
".quad 0x25202c3131336625,0x62090a3b31383266,0x0920696e752e6172,0x35315f395f744c24\n"
".quad 0x744c240a3b363031,0x30353834315f395f,0x662e766f6d090a3a,0x3133662509203233\n"
".quad 0x3032346630202c32,0x20203b3030303034,0x0a3333202f2f0920,0x746c2e7074657309\n"
".quad 0x702509203233662e,0x38316625202c3031,0x3231336625202c37,0x3170252140090a3b\n"
".quad 0x2409206172622030,0x3335315f395f744c,0x6f6c2e090a3b3236,0x3330350930320963\n"
".quad 0x2e67656e090a3009,0x3366250920323366,0x38316625202c3331,0x2e766f6d090a3b37\n"
".quad 0x3366250920323366,0x66336630202c3431,0x203b623361613862,0x2e31202f2f092020\n"
".quad 0x756d090a37323434,0x2509203233662e6c,0x6625202c35313366,0x336625202c333133\n"
".quad 0x327865090a3b3431,0x2e786f727070612e,0x3266250920323366,0x31336625202c3631\n"
".quad 0x636f6c2e090a3b35,0x0930353209363109,0x722e706372090a30,0x2509203233662e6e\n"
".quad 0x6625202c36313366,0x6f6d090a3b373831,0x2509203233662e76,0x6630202c37313366\n"
".quad 0x3361303563373862,0x202f2f092020203b,0x36363531302e362d,0x6f6d090a35302d65\n"
".quad 0x2509203233662e76,0x6630202c38313366,0x6338303765666562,0x202f2f092020203b\n"
".quad 0x35393639342e302d,0x662e766f6d090a32,0x3133662509203233,0x3465336630202c39\n"
".quad 0x20203b3633316638,0x312e30202f2f0920,0x66090a3333323639,0x33662e6e722e616d\n"
".quad 0x3032336625092032,0x2c3931336625202c,0x202c363133662520,0x090a3b3831336625\n"
".quad 0x662e6e722e616d66,0x3233662509203233,0x3631336625202c31,0x2c3032336625202c\n"
".quad 0x0a3b373133662520,0x2e6e722e616d6609,0x3166250920323366,0x31326625202c3239\n"
".quad 0x3132336625202c36,0x3b3138326625202c,0x6e752e617262090a,0x395f744c24092069\n"
".quad 0x0a3b36303135315f,0x35315f395f744c24,0x6c2e090a3a323633,0x353209363109636f\n"
".quad 0x766f6d090a300935,0x662509203233662e,0x326625202c323931,0x5f744c240a3b3138\n"
".quad 0x3a36303135315f39,0x315f395f744c240a,0x4c240a3a34393534,0x383034315f395f74\n"
".quad 0x395f744c240a3a32,0x0a3a30373533315f,0x33315f395f744c24,0x744c240a3a383530\n"
".quad 0x36343532315f395f,0x5f395f744c240a3a,0x090a3a3433303231,0x09363109636f6c2e\n"
".quad 0x6d090a3009303031,0x09203233662e766f,0x30202c3232336625,0x3832666230323466\n"
".quad 0x2f2f092020203b35,0x383638392e343320,0x33662e6c756d090a,0x3332336625092032\n"
".quad 0x2c3935316625202c,0x0a3b323233662520,0x3233662e6c756d09,0x2c34323366250920\n"
".quad 0x202c323931662520,0x090a3b3332336625,0x20696e752e617262,0x315f395f744c2409\n"
".quad 0x4c240a3b30313031,0x373731315f395f74,0x2e766f6d090a3a38,0x3366250920323366\n"
".quad 0x30306630202c3432,0x203b303030303030,0x0a30202f2f092020,0x696e752e61726209\n"
".quad 0x5f395f744c240920,0x240a3b3031303131,0x3231315f395f744c,0x766f6d090a3a3636\n"
".quad 0x662509203233662e,0x306630202c343233,0x3b30303030303030,0x30202f2f09202020\n"
".quad 0x315f395f744c240a,0x6d090a3a30313031,0x09203233752e766f,0x5f5f202c36357225\n"
".quad 0x635f5f5f61647563,0x61636f6c5f616475,0x30335f7261765f6c,0x6e5f33335f363739\n"
".quad 0x74736e6f635f6e6f,0x3b3233617461445f,0x3109636f6c2e090a,0x0a30093330310936\n"
".quad 0x2e6f6c2e6c756d09,0x3572250920323375,0x202c317225202c37,0x2e646461090a3b34\n"
".quad 0x3572250920323375,0x2c37357225202c38,0x090a3b3635722520,0x65726168732e7473\n"
".quad 0x5b09203233662e64,0x2c5d302b38357225,0x0a3b343233662520,0x363109636f6c2e09\n"
".quad 0x090a300934303109,0x636e79732e726162,0x6c2e090a3b300920,0x303109363109636f\n"
".quad 0x766f6d090a300936,0x722509203233752e,0x69746e25202c3935,0x6873090a3b782e64\n"
".quad 0x2509203233752e72,0x357225202c303672,0x6d090a3b31202c39,0x09203233732e766f\n"
".quad 0x7225202c31367225,0x766f6d090a3b3036,0x722509203233752e,0x090a3b30202c3236\n"
".quad 0x2e71652e70746573,0x3170250920323375,0x2c30367225202c31,0x090a3b3236722520\n"
".quad 0x7262203131702540,0x395f744c24092061,0x0a3b38313635315f,0x36315f395f744c24\n"
".quad 0x2f2f200a3a303331,0x4c203e706f6f6c3c,0x79646f6220706f6f,0x303120656e696c20\n"
".quad 0x2e70746573090a36,0x09203233752e6567,0x7225202c32317025,0x3b31367225202c31\n"
".quad 0x203231702540090a,0x744c240920617262,0x36383336315f395f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c36303120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x30333136315f395f,0x3109636f6c2e090a\n"
".quad 0x0a30093930310936,0x726168732e646c09,0x09203233662e6465,0x5b202c3532336625\n"
".quad 0x3b5d302b38357225,0x33752e646461090a,0x2c33367225092032,0x7225202c31722520\n"
".quad 0x6c756d090a3b3136,0x203233752e6f6c2e,0x25202c3436722509,0x0a3b34202c333672\n"
".quad 0x3233752e64646109,0x202c353672250920,0x7225202c36357225,0x2e646c090a3b3436\n"
".quad 0x662e646572616873,0x3233662509203233,0x353672255b202c36,0x6461090a3b5d302b\n"
".quad 0x2509203233662e64,0x6625202c37323366,0x336625202c353233,0x2e7473090a3b3632\n"
".quad 0x662e646572616873,0x3572255b09203233,0x6625202c5d302b38,0x744c240a3b373233\n"
".quad 0x36383336315f395f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c36303120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x30333136315f395f,0x3109636f6c2e090a,0x0a30093031310936,0x6e79732e72616209\n"
".quad 0x2e090a3b30092063,0x3109363109636f6c,0x6873090a30093630,0x2509203233752e72\n"
".quad 0x367225202c313672,0x6d090a3b31202c31,0x09203233752e766f,0x3b30202c36367225\n"
".quad 0x6e2e70746573090a,0x2509203233752e65,0x367225202c333170,0x3b36367225202c31\n"
".quad 0x203331702540090a,0x744c240920617262,0x30333136315f395f,0x5f395f744c240a3b\n"
".quad 0x090a3a3831363531,0x7262203170252140,0x395f744c24092061,0x0a3b34353137315f\n"
".quad 0x363109636f6c2e09,0x090a300934313109,0x65726168732e646c,0x2509203233662e64\n"
".quad 0x5f5b202c38323366,0x5f5f5f616475635f,0x636f6c5f61647563,0x335f7261765f6c61\n"
".quad 0x5f33335f36373930,0x736e6f635f6e6f6e,0x3233617461445f74,0x646c090a3b5d302b\n"
".quad 0x752e6d617261702e,0x3736722509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x657475706d6f4338,0x34746e6975355058,0x754f5f645f696650,0x090a3b5d74757074\n"
".quad 0x752e6f6c2e6c756d,0x3836722509203233,0x34202c357225202c,0x752e646461090a3b\n"
".quad 0x3936722509203233,0x202c37367225202c,0x73090a3b38367225,0x6c61626f6c672e74\n"
".quad 0x255b09203233662e,0x202c5d302b393672,0x240a3b3832336625,0x3137315f395f744c\n"
".quad 0x6f6c2e090a3a3435,0x3531310936310963,0x74697865090a3009,0x6e6557444c240a3b\n"
".quad 0x6d6f43385a5f5f64,0x7535505865747570,0x3a69665034746e69,0x5f202f2f207d090a\n"
".quad 0x7475706d6f43385a,0x746e697535505865,0x2e090a0a69665034,0x5a5f207972746e65\n"
".quad 0x756465526f443131,0x5366506e6f697463,0x32746e697535505f,0x2e09090a28206969\n"
".quad 0x752e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x756465526f443131\n"
".quad 0x5366506e6f697463,0x32746e697535505f,0x6465525f645f6969,0x75536e6f69746375\n"
".quad 0x61702e09090a2c6d,0x3233752e206d6172,0x70616475635f5f20,0x31315a5f5f6d7261\n"
".quad 0x7463756465526f44,0x505f5366506e6f69,0x696932746e697535,0x757074754f5f645f\n"
".quad 0x61702e09090a2c74,0x3233752e206d6172,0x70616475635f5f20,0x31315a5f5f6d7261\n"
".quad 0x7463756465526f44,0x505f5366506e6f69,0x696932746e697535,0x6c616e69465f645f\n"
".quad 0x0a2c656375646552,0x6d617261702e0909,0x5f5f203233732e20,0x6d72617061647563\n"
".quad 0x526f4431315a5f5f,0x6e6f697463756465,0x697535505f536650,0x6c625f696932746e\n"
".quad 0x657a69735f6b636f,0x7261702e09090a2c,0x203233732e206d61,0x6170616475635f5f\n"
".quad 0x4431315a5f5f6d72,0x697463756465526f,0x35505f5366506e6f,0x5f696932746e6975\n"
".quad 0x0a2974657366664f,0x6765722e090a7b09,0x7225203233752e20,0x2e090a3b3e30333c\n"
".quad 0x3233662e20676572,0x0a3b3e383c662520,0x702e206765722e09,0x373c702520646572\n"
".quad 0x6168732e090a3b3e,0x696c612e20646572,0x38622e2034206e67,0x5f616475635f5f20\n"
".quad 0x6c5f616475635f5f,0x7261765f6c61636f,0x335f30363031335f,0x6f635f6e6f6e5f33\n"
".quad 0x757365525f74736e,0x35325b383033746c,0x6f6c2e090a3b5d36,0x3931310936310963\n"
".quad 0x6257444c240a3009,0x315a5f5f6e696765,0x63756465526f4431,0x5f5366506e6f6974\n"
".quad 0x6932746e69753550,0x2e766f6d090a3a69,0x3172250920323375,0x616475635f5f202c\n"
".quad 0x5f616475635f5f5f,0x61765f6c61636f6c,0x5f30363031335f72,0x635f6e6f6e5f3333\n"
".quad 0x7365525f74736e6f,0x0a3b383033746c75,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x635f5f5b202c3272,0x5f6d726170616475,0x65526f4431315a5f,0x506e6f6974637564\n"
".quad 0x6e697535505f5366,0x66664f5f69693274,0x63090a3b5d746573,0x752e3233732e7476\n"
".quad 0x2c33722509203233,0x2e64696174632520,0x2e646461090a3b78,0x3472250920323373\n"
".quad 0x25202c327225202c,0x747663090a3b3372,0x3233752e3233732e,0x25202c3572250920\n"
".quad 0x090a3b782e646974,0x752e6f6c2e6c756d,0x2c36722509203233,0x3b34202c35722520\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x202c347225202c37,0x2e646461090a3b38\n"
".quad 0x3872250920323375,0x25202c367225202c,0x2e646c090a3b3172,0x33752e6d61726170\n"
".quad 0x202c397225092032,0x70616475635f5f5b,0x31315a5f5f6d7261,0x7463756465526f44\n"
".quad 0x505f5366506e6f69,0x696932746e697535,0x6c616e69465f645f,0x3b5d656375646552\n"
".quad 0x33752e646461090a,0x2c30317225092032,0x7225202c39722520,0x2e75646c090a3b37\n"
".quad 0x752e6c61626f6c67,0x3131722509203233,0x2b303172255b202c,0x746573090a3b5d34\n"
".quad 0x3233732e65672e70,0x25202c3170250920,0x31317225202c3572,0x2031702540090a3b\n"
".quad 0x744c240920617262,0x323438335f30315f,0x09636f6c2e090a3b,0x3009333331093631\n"
".quad 0x7261702e646c090a,0x09203233752e6d61,0x5f5b202c32317225,0x726170616475635f\n"
".quad 0x6f4431315a5f5f6d,0x6f69746375646552,0x7535505f5366506e,0x645f696932746e69\n"
".quad 0x5d74757074754f5f,0x672e75646c090a3b,0x33752e6c61626f6c,0x2c33317225092032\n"
".quad 0x302b303172255b20,0x2e646461090a3b5d,0x3172250920323373,0x202c357225202c34\n"
".quad 0x6d090a3b33317225,0x33752e6f6c2e6c75,0x2c35317225092032,0x34202c3431722520\n"
".quad 0x752e646461090a3b,0x3631722509203233,0x202c32317225202c,0x6c090a3b35317225\n"
".quad 0x6c61626f6c672e64,0x662509203233662e,0x363172255b202c31,0x7473090a3b5d302b\n"
".quad 0x2e6465726168732e,0x72255b0920323366,0x6625202c5d302b38,0x2e617262090a3b31\n"
".quad 0x744c240920696e75,0x363835335f30315f,0x30315f744c240a3b,0x090a3a323438335f\n"
".quad 0x09363109636f6c2e,0x6d090a3009353331,0x09203233662e766f,0x306630202c326625\n"
".quad 0x3b30303030303030,0x2f2f092020202020,0x732e7473090a3020,0x33662e6465726168\n"
".quad 0x2b3872255b092032,0x3b326625202c5d30,0x5f30315f744c240a,0x2e090a3a36383533\n"
".quad 0x3109363109636f6c,0x6162090a30093633,0x0920636e79732e72,0x636f6c2e090a3b30\n"
".quad 0x0938333109363109,0x752e766f6d090a30,0x3731722509203233,0x2e6469746e25202c\n"
".quad 0x2e726873090a3b78,0x3172250920323375,0x2c37317225202c38,0x766f6d090a3b3120\n"
".quad 0x722509203233732e,0x38317225202c3931,0x752e766f6d090a3b,0x3032722509203233\n"
".quad 0x6573090a3b30202c,0x33752e71652e7074,0x202c327025092032,0x7225202c38317225\n"
".quad 0x702540090a3b3032,0x2409206172622032,0x30345f30315f744c,0x5f744c240a3b3839\n"
".quad 0x3a303136345f3031,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62\n"
".quad 0x73090a3833312065,0x752e65672e707465,0x2c33702509203233,0x7225202c35722520\n"
".quad 0x702540090a3b3931,0x2409206172622033,0x38345f30315f744c,0x3c2f2f200a3b3636\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x38333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x36345f30315f744c,0x636f6c2e090a3031\n"
".quad 0x0931343109363109,0x68732e646c090a30,0x3233662e64657261,0x5b202c3366250920\n"
".quad 0x0a3b5d302b387225,0x3233752e64646109,0x202c313272250920,0x317225202c357225\n"
".quad 0x2e6c756d090a3b39,0x09203233752e6f6c,0x7225202c32327225,0x090a3b34202c3132\n"
".quad 0x203233752e646461,0x25202c3332722509,0x32327225202c3172,0x68732e646c090a3b\n"
".quad 0x3233662e64657261,0x5b202c3466250920,0x3b5d302b33327225,0x33662e646461090a\n"
".quad 0x202c356625092032,0x346625202c336625,0x68732e7473090a3b,0x3233662e64657261\n"
".quad 0x302b3872255b0920,0x0a3b356625202c5d,0x345f30315f744c24,0x2f2f200a3a363638\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c38,0x2064656c6562616c,0x345f30315f744c24,0x6f6c2e090a303136\n"
".quad 0x3234310936310963,0x2e726162090a3009,0x3b300920636e7973,0x3109636f6c2e090a\n"
".quad 0x0a30093833310936,0x3233752e72687309,0x202c393172250920,0x3b31202c39317225\n"
".quad 0x33752e766f6d090a,0x2c34327225092032,0x746573090a3b3020,0x3233752e656e2e70\n"
".quad 0x25202c3470250920,0x327225202c393172,0x34702540090a3b34,0x4c24092061726220\n"
".quad 0x3136345f30315f74,0x315f744c240a3b30,0x0a3a383930345f30,0x3233752e766f6d09\n"
".quad 0x202c353272250920,0x70746573090a3b30,0x203233732e656e2e,0x7225202c35702509\n"
".quad 0x3b35327225202c35,0x622035702540090a,0x5f744c2409206172,0x3b343336355f3031\n"
".quad 0x3109636f6c2e090a,0x0a30093634310936,0x726168732e646c09,0x09203233662e6465\n"
".quad 0x5f5f5b202c366625,0x635f5f5f61647563,0x61636f6c5f616475,0x31335f7261765f6c\n"
".quad 0x6e5f33335f303630,0x74736e6f635f6e6f,0x33746c757365525f,0x090a3b5d302b3830\n"
".quad 0x6d617261702e646c,0x722509203233752e,0x635f5f5b202c3632,0x5f6d726170616475\n"
".quad 0x65526f4431315a5f,0x506e6f6974637564,0x6e697535505f5366,0x525f645f69693274\n"
".quad 0x6e6f697463756465,0x6d090a3b5d6d7553,0x33752e6f6c2e6c75,0x2c37327225092032\n"
".quad 0x3b34202c34722520,0x33752e646461090a,0x2c38327225092032,0x25202c3632722520\n"
".quad 0x7473090a3b373272,0x2e6c61626f6c672e,0x72255b0920323366,0x25202c5d302b3832\n"
".quad 0x5f744c240a3b3666,0x3a343336355f3031,0x3109636f6c2e090a,0x0a30093734310936\n"
".quad 0x240a3b7469786509,0x5f5f646e6557444c,0x6465526f4431315a,0x66506e6f69746375\n"
".quad 0x746e697535505f53,0x207d090a3a696932,0x4431315a5f202f2f,0x697463756465526f\n"
".quad 0x35505f5366506e6f,0x0a696932746e6975,0x6c61626f6c672e09,0x6665727865742e20\n"
".quad 0x7468675778657420,0x000000000a0a3b73\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[5278];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_21$:\n"
".quad 0x33010101464c457f,0x0000000000000004,0x0000000100be0002,0x0000185c00000000\n"
".quad 0x0014011500000034,0x0028000500200034,0x000000000001000f,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000100000000\n"
".quad 0x0000000000000003,0x0000028c00000000,0x00000000000001ac,0x0000000400000000\n"
".quad 0x0000000b00000000,0x0000000000000003,0x0000043800000000,0x000000000000007e\n"
".quad 0x0000000100000000,0x0000001300000000,0x0000000000000002,0x000004b600000000\n"
".quad 0x0000000200000180,0x0000000100000011,0x0000008800000010,0x0010000600000001\n"
".quad 0x0000063600000000,0x0000000300000e40,0x0000000432000009,0x0000010900000000\n"
".quad 0x0000000200000001,0x0000147600000000,0x000000000000002c,0x0000000400000004\n"
".quad 0x000000e400000000,0x0000000200000001,0x000014a200000000,0x00000000000000bc\n"
".quad 0x0000000400000004,0x000000a400000000,0x0000000200000001,0x0000155e00000000\n"
".quad 0x0000000000000074,0x0000000100000004,0x000000c300000000,0x0000000300000008\n"
".quad 0x000015d200000000,0x0000000000000110,0x0000000400000004,0x0000003600000000\n"
".quad 0x0010000600000001,0x000015d200000000,0x0000000300000130,0x0000000407000006\n"
".quad 0x0000018100000000,0x0000000200000001,0x0000170200000000,0x0000000000000034\n"
".quad 0x0000000400000009,0x0000015500000000,0x0000000200000001,0x0000173600000000\n"
".quad 0x0000000000000004,0x0000000400000009,0x0000005900000000,0x0000000200000001\n"
".quad 0x0000173a00000000,0x0000000000000084,0x0000000100000009,0x0000012d00000000\n"
".quad 0x0000000300000008,0x000017be00000000,0x0000000000000100,0x0000000400000009\n"
".quad 0x0000007f00000000,0x0000000200000001,0x000017be00000000,0x000000000000009c\n"
".quad 0x0000000100000000,0x68732e0000000000,0x2e00626174727473,0x2e00626174727473\n"
".quad 0x2e006261746d7973,0x61626f6c672e766e,0x2e0074696e692e6c,0x61626f6c672e766e\n"
".quad 0x2e747865742e006c,0x65526f4431315a5f,0x506e6f6974637564,0x6e697535505f5366\n"
".quad 0x766e2e0069693274,0x5a5f2e6f666e692e,0x756465526f443131,0x5366506e6f697463\n"
".quad 0x32746e697535505f,0x692e766e2e006969,0x7865742e006f666e,0x6d6f43385a5f2e74\n"
".quad 0x7535505865747570,0x0069665034746e69,0x6f666e692e766e2e,0x706d6f43385a5f2e\n"
".quad 0x6975355058657475,0x2e0069665034746e,0x65726168732e766e,0x6d6f43385a5f2e64\n"
".quad 0x7535505865747570,0x0069665034746e69,0x736e6f632e766e2e,0x5f2e3631746e6174\n"
".quad 0x7475706d6f43385a,0x746e697535505865,0x766e2e0069665034,0x6e6174736e6f632e\n"
".quad 0x6f43385a5f2e3074,0x355058657475706d,0x69665034746e6975,0x6168732e766e2e00\n"
".quad 0x31315a5f2e646572,0x7463756465526f44,0x505f5366506e6f69,0x696932746e697535\n"
".quad 0x6e6f632e766e2e00,0x2e3631746e617473,0x65526f4431315a5f,0x506e6f6974637564\n"
".quad 0x6e697535505f5366,0x766e2e0069693274,0x6e6174736e6f632e,0x4431315a5f2e3074\n"
".quad 0x697463756465526f,0x35505f5366506e6f,0x00696932746e6975,0x526f4431315a5f00\n"
".quad 0x6e6f697463756465,0x697535505f536650,0x5a5f00696932746e,0x657475706d6f4338\n"
".quad 0x34746e6975355058,0x75635f5f00696650,0x5f30326d735f6164,0x665f6e725f706372\n"
".quad 0x6475635f5f003233,0x735f30326d735f61,0x665f6e725f747271,0x6f43786574003233\n"
".quad 0x537865740073726f,0x78657400736d7270,0x0000007374686757,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000100030000,0x0000000000000000\n"
".quad 0x0000000200030000,0x0000000000000000,0x0000000300030000,0x0000000000000000\n"
".quad 0x0000000000030000,0x0000000000000000,0x0000000000030000,0x0130000000000000\n"
".quad 0x0000000900030000,0x0000000000000000,0x0000000c00030000,0x0000000000000000\n"
".quad 0x0000000e00030000,0x0e40000000000000,0x0000000400030000,0x0000000000000000\n"
".quad 0x0000000700030000,0x0000000000000000,0x0000000800030000,0x0000000000000000\n"
".quad 0x0000000600030000,0x0000000000000000,0x0000000500030000,0x0000000000000000\n"
".quad 0x0000000d00030000,0x0000000000000000,0x0000000b00030000,0x0000000000000000\n"
".quad 0x0001000a00030000,0x0130000000000000,0x001e000910120000,0x0b18000000000000\n"
".quad 0x0034000410120000,0x023000000b180000,0x004b000400120000,0x00f800000d480000\n"
".quad 0x0063000400120000,0x0000000000000000,0x006c0000001a0000,0x0000000000000000\n"
".quad 0x00750000001a0000,0x0000000000000000,0x5de40000001a0000,0xdc04280044040000\n"
".quad 0xdc232c0000008405,0x1c04190e0000fd71,0xdc032c0000009400,0xa1e748004000a004\n"
".quad 0x0083400000006000,0x00c5400040008130,0x00c5800000000001,0xdc04c900000003f1\n"
".quad 0x1c8550ee0000ffff,0x9c03c100000003f1,0x1c036000c0006040,0xdc036800c0003c40\n"
".quad 0x9c235800c0007020,0x9c037000c0600001,0xdc236000c0005040,0x5c037000c0600030\n"
".quad 0x9ca35800c0007021,0x0007500000001830,0x9c0360000026a000,0xdc856000c0004041\n"
".quad 0x1c23c100000033f0,0x9c037000c0600051,0x5c235800c0007061,0x9c237000c0600021\n"
".quad 0x1ca37000c0600061,0x5cc3500000001441,0xdc23400000005d31,0xdcc37000c0600041\n"
".quad 0x5ca3410000001430,0xdc23500000001c61,0x01e71b0e00001431,0x5e0440000024e000\n"
".quad 0x9e04180000001121,0xdc80180000000d21,0xde04208ec0200051,0x4000180000000921\n"
".quad 0x80005800d2e00051,0x5c005800d2e00061,0x5c00c80000001051,0xdc80580000001461\n"
".quad 0x9c23208ec0200071,0x1c847000c0600041,0x5c23140600001522,0x1c857000c0600081\n"
".quad 0xc000c100000023f1,0x1ea35800d2e00071,0x5e04200600001853,0xdc00180000003121\n"
".quad 0x4000c80000001070,0x9c035800d2e00051,0xdc035800c0006041,0xdc006000c0002041\n"
".quad 0x5c03580000000c50,0xdde4480000001881,0xdc8428000000fc02,0x9c85140600000d20\n"
".quad 0x5c03c100000013f1,0x9e045800c0006072,0xdc23180000001522,0x1e047000c0600021\n"
".quad 0x5c23180000000122,0x5c037000c0600031,0xdc80480000002432,0x9c86208ec0200081\n"
".quad 0x5de48010c101fca0,0xdea328000000fc03,0x1e04201800001c51,0x0000180000002523\n"
".quad 0x9e045800d2e00082,0xdc03180000001d22,0x5c005800c0006062,0x1c86c80000001081\n"
".quad 0x1c038010c101fccb,0x80006000c0002063,0x5de45800d2e000a2,0x1e0428000000fc02\n"
".quad 0x5c00180000002d22,0xdc035800000014a1,0x9c036000c0004042,0x1d065800c00060c2\n"
".quad 0x5c848011c000fc84,0xdc03140600001521,0x1e045800c00060b2,0xdc03180000002922\n"
".quad 0x9c23480000002c52,0x1c237000c0600002,0x5de47000c0600050,0x1d0628000000fc01\n"
".quad 0x1c038011c000fc85,0x1ea36800c003fc42,0x1e04200e00002800,0xdc03180000002d21\n"
".quad 0x1c03480000002001,0x9c866000c0004060,0x1e048010c101fc4b,0x1c03180000001d21\n"
".quad 0x1c865800c0006000,0x1e048010c101fc4c,0x1c03180000000121,0x1c866800c003fc60\n"
".quad 0x1e048011c000fc46,0x1d06180000000121,0xdc008011c000fc47,0xdc8050000000b026\n"
".quad 0x1c00208ec02001b1,0x5c045800d2e001b0,0x1c00200000006c01,0xdc0058000000b020\n"
".quad 0x1d00c80000001051,0x9d00500000005511,0x1c00500000005101,0x0000580000001041\n"
".quad 0x1d005800d2e00000,0x1c00500000005922,0x1c00300800001861,0x1c00580000001c00\n"
".quad 0xdc00300800002081,0x1c0050000000c2e7,0xdc80580000001001,0x9c00208ec02001f1\n"
".quad 0xdc045800d2e001f1,0x5d00200000007c61,0x1d00500000007591,0x9c00500000007182\n"
".quad 0x5c00580000001451,0x9c0058000000c2e1,0x1c00300c00002081,0x4000c80000001072\n"
".quad 0xdd005800d2e00051,0x1c005000000079a1,0x5c00580000002050,0x1c00300c00001c71\n"
".quad 0x1c02300800000050,0x1c0032fee2a8ec00,0xdc0058000000b431,0xdc00208ef0bf0001\n"
".quad 0x0000580000007db0,0x1c005800cfc00000,0x1c205800000012f1,0xdc80600000000000\n"
".quad 0x1c00208ec0200033,0x5c00c80000000800,0x1c005800d2e00031,0x0000580000001311\n"
".quad 0x5c04580000000000,0x9c00200200000c51,0x5c00580000001001,0x1c00500000007dbb\n"
".quad 0x8400c80000001050,0x1de45800d2e00061,0xdc0028000000b401,0x000758000000006b\n"
".quad 0x000750000021e001,0xdc00500000190001,0x1c005800000012fb,0xdc0058000000bef0\n"
".quad 0x21e7220e40000401,0xdc80400000150000,0x5c00208ec02001b3,0x9c005800d2e001b1\n"
".quad 0x1c005800000056c1,0xdc8058000000b142,0xdc00208ec02001f5,0x5c045800d2e001f2\n"
".quad 0xdc00200200006c52,0x9c00580000007701,0x1c00300c00004422,0x1c00301000000903\n"
".quad 0x1c0458000000c1c1,0x1c00200400007cb2,0x9c00580000005ac0,0xdc00c80000001091\n"
".quad 0x8400300e000066e1,0x5c005800d2e000a2,0xdc0030080000b982,0x1c00300000004822\n"
".quad 0x5c00c80000001081,0xc800580000007b01,0x9c005800d2e00071,0x04005800000018a0\n"
".quad 0xdc805800d2e000c3,0x1c00208ec02002d1,0x5c005800d2e002d0,0xc400300a00006ae1\n"
".quad 0xde005800d2e000b2,0x4800300400001071,0x1c005800d2e00092,0x1c045800000018c2\n"
".quad 0x9c0020000000b400,0x48005800d2e00030,0x9c005800d2e00051,0xdc005800000018b2\n"
".quad 0x9e00580000001c71,0x1c00301000001091,0x9c04c80000001000,0x0007200000000c20\n"
".quad 0xde006000000fe000,0x9c00301400001050,0x1c00580000000020,0x1c00300e00001861\n"
".quad 0xdc00300800000c30,0xdc00580000000020,0x21e7208e40001431,0x1de2400000004000\n"
".quad 0x1e1018fe00000000,0xdc00300040002431,0x21e7208ecfe00031,0x1de2400000024000\n"
".quad 0x9c0218d68acf1400,0x1c0032fee2a8ec30,0xdc00300040003430,0x1c00208ef0bf0021\n"
".quad 0x8000300080004430,0x1c005800cfc00020,0x1c00300080005430,0x9c20300080006430\n"
".quad 0x1c00600000000800,0x9c00300080007430,0x1c00c80000000820,0x1c00300080008430\n"
".quad 0x1c00500000000c31,0x8000300080009430,0x1c00580000000820,0x1c0030008000a430\n"
".quad 0x1c10300080002430,0xdc00300400001001,0x21e7208ed0100031,0x1c0040000002a000\n"
".quad 0x9de25000f0000030,0x9c0018c41b5a3400,0x9c0030044000b400,0x1c0230048000c400\n"
".quad 0x9c0032fee2a8ec31,0xdc0030048000d400,0x9c00208ef0bf0041,0x000030048000e400\n"
".quad 0x9c005800cfc00041,0x1c2030048000f400,0x9c00600000001001,0x1c00300480010400\n"
".quad 0x9c00c80000000841,0xdc00300480011400,0x9c00500000000c30,0x0000300480012400\n"
".quad 0x9c00580000001041,0x9c00300480013400,0x1c00300480014400,0x1c10300480015400\n"
".quad 0xdc00300800000c01,0x21e7208ed0280031,0x1c0040000002a000,0x9de25000f0200030\n"
".quad 0x9c0018bec88d4400,0x1c02300440016400,0x9c0032fee2a8ec31,0xdc00300480017400\n"
".quad 0x9c00208ef0bf0041,0x0000300480018400,0x9c005800cfc00041,0x1c20300480019400\n"
".quad 0x9c00600000001001,0x1c0030048001a400,0x9c00c80000000841,0xdc0030048001b400\n"
".quad 0x9c00500000000c30,0x000030048001c400,0x9c00580000001041,0x9c0030048001d400\n"
".quad 0x9c0030048001e400,0x1c0030048001f400,0x1c10300480020400,0x1c02300800000c01\n"
".quad 0x000730fe8be60c31,0x000750000012c001,0xdc0050000009e001,0x9de4208ed0480031\n"
".quad 0x21e7280000001000,0x1c02400000020000,0xdc0032fee2a8ec30,0x1de4208ef0bf0001\n"
".quad 0x0000280000000c01,0x1c205800cfc00000,0x1c00600000000000,0x0000c80000000804\n"
".quad 0x0007580000004104,0x1de2500000088001,0x1c001afccc586c00,0x1c00300040021440\n"
".quad 0x1c00300080022440,0x1c00300080023440,0x1c00300080024440,0x1c00300080025440\n"
".quad 0x1c10300080026440,0xdc00300400000101,0x21e7208ed05c0031,0x1c0240000001a000\n"
".quad 0x1de432fee2a8ec30,0xdc00280000000c01,0x0000208ef0bf0001,0x1c205800cfc00000\n"
".quad 0x1c00600000000000,0x0000c80000000804,0x0007580000004104,0x1de2500000064001\n"
".quad 0x1c0018f9adbf0400,0x1c00300040027440,0x1c00300080028440,0x1c10300080029440\n"
".quad 0xdc00300400000101,0x21e7208ed0810031,0x1c02400000018000,0x1de432fee2a8ec30\n"
".quad 0xdc00280000000c01,0x0000208ef0bf0001,0x1c205800cfc00000,0x1c00600000000000\n"
".quad 0x0000c80000000804,0x0007580000004104,0x1de2500000046001,0x1c001afbf9c23000\n"
".quad 0x1c0030004002a440,0x1c1030008002b440,0x1df4300400000101,0x1c02400000000000\n"
".quad 0x1c1031082fca16f0,0x1df4580000000040,0x1df428000000fc00,0x9e0328000000fc00\n"
".quad 0xdc036000c0000970,0x1c854800c0004020,0xdc04c90000004020,0x1de450ee0000ffff\n"
".quad 0x1c03280040002000,0xdc035800c0000400,0x01e7190e0000fc01,0xdc03400000018000\n"
".quad 0x81e71b0e00000171,0xa00340000000c000,0x2085480000000170,0xa203c10000000031\n"
".quad 0xa0856000c0000820,0xa000c10000004020,0xa085500000000840,0xdc04c90000000030\n"
".quad 0x1c0350ee0000ffff,0xdc035800c0000400,0x01e71a8e0000fc01,0xdc234003fffe8000\n"
".quad 0x21e7190e0000fd71,0x1c85800000000000,0x9c43c100000043f0,0x1c85400040009130\n"
".quad 0x1de7900000000020,0x1c03800000000000,0x1c036000c0000440,0x5c035800c0006000\n"
".quad 0x5c044800c0000c01,0xdc031c0000001421,0x01e7198ec0000c51,0x1c00400000008000\n"
".quad 0x1c00c80000001040,0x1e0030008002c441,0x1de7300000001001,0xdc03400000076000\n"
".quad 0x01e71a8e0000fc01,0x1c02400000030000,0x5c033801fffffc40,0x5e03780000000001\n"
".quad 0x9c034800c0007c51,0xdc034800ffffdc51,0x01e7198ec0000461,0x1c00400000004000\n"
".quad 0x1de7c80000001041,0x9c03400000062000,0x1c034800ffffe051,0x1c02600000001800\n"
".quad 0x1c023a0000000041,0x1c423801fffffc00,0x9c0038fe00000000,0x1c00c80000001001\n"
".quad 0x1e00300c8002c400,0x1c02300c00000060,0x9c033801fffffc00,0x5d03110e0000fc01\n"
".quad 0x5c03480000001851,0x5c034800c003d051,0x1c436000c0005c51,0x1c43680000001441\n"
".quad 0x1de7680000001001,0x5c03400000042000,0xdc034800fffc0c01,0x01e71a0ec0000451\n"
".quad 0x9c0240000003a000,0xdde23801fffffc41,0xdc42180000000c02,0xdc0338fe00000061\n"
".quad 0x1c006000000014b2,0x1c02c80000001072,0xdc003a0000000041,0x5e0030108002c471\n"
".quad 0x9c02309000001c82,0x1e003801fffffc92,0x9c42311000001c82,0xdc003802000000a2\n"
".quad 0xdc032e8e00002091,0x1c046800000028b1,0xdc032010c00007f2,0x5c03580000001471\n"
".quad 0x5c03680000002851,0x5c436800c0000872,0xdc03680000001481,0x1c031a8e0000fc91\n"
".quad 0xdc034800fffc1002,0x1c031aa00000fc51,0x5c036800c0000470,0xdc235800000020a1\n"
".quad 0x40031a800000fc01,0x1c034800c0000451,0x1c036000c0000450,0x1c43310c00001400\n"
".quad 0x1de7680000001001,0x1c00400000002000,0x1de7c80000001041,0x1c02900000000000\n"
".quad 0xdc030bcc00000040,0x01e7198e4002d401,0x1c02400000022000,0xdc2339fffffffc40\n"
".quad 0x21e71a8e0000fc01,0xdc00400000030000,0x21e7288e0000fc41,0x1de2400000004000\n"
".quad 0x1de719fffffffc01,0xdc80400000028000,0x1c44298edfe00041,0x01e7108000001120\n"
".quad 0x1c20400000004000,0x1de75000cfe00041,0xdc0040000001e000,0x01e7290edfe00001\n"
".quad 0x1c0040000001a000,0xdc04307ed7e00041,0x1de70c0e00001c71,0xdc04400000002000\n"
".quad 0x1c000c0e00001cf1,0x5c40c80000001440,0x1c40580000001001,0x9e005800cfc00000\n"
".quad 0x5c0030008002e451,0x9c00300a00001851,0x1e00300000001801,0x1c00300800001450\n"
".quad 0x0040300a00001801,0x1de75800cbe00041,0x0000900000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0fb019416d9a0000,0x98d83eaaaaab34a1,0x0728b7420cb6b3b3,0x3decba28086338c2\n"
".quad 0x4925bc97b4253b78,0xcb49be4ccccd3d92,0x3c08b2b806a8af31,0x416eb60572333469\n"
".quad 0x0676b8f4d2783788,0x7be0bb78b3dc3a3e,0xf544bd58da913c84,0x6b26ade6db4a3dec\n"
".quad 0xc7bc33218076b178,0x1b80364ad720b4be,0x327d392011aeb7c0,0x923b3b8df41eba67\n"
".quad 0x1d823d586f6bbc8f,0x5c723f0971cf3ef0,0xeb203e7c5ef4bea8,0x5aeeb6536671beff\n"
".quad 0xd95abeff74bdbe40,0x50a33e48f136b7b7,0xffffbf800000b87c,0x0c043f000000727f\n"
".quad 0x000400000000000c,0x0204000000080000,0x0001000000160008,0x0015000802040000\n"
".quad 0x0a04000000000000,0x00200000000d0008,0x1704000c1903000c,0x0002ffffffff000c\n"
".quad 0x17040011f0000008,0x0001ffffffff000c,0x17040011f0000004,0x0000ffffffff000c\n"
".quad 0x0d040011f0000000,0x000a000d009c0008,0x440400005de40000,0x000094001c042800\n"
".quad 0x4000c0009c032c00,0x00008400dc044800,0x4000a0215c632c00,0xc00008311e034000\n"
".quad 0x000010501c856000,0x00000031dc238800,0x0000a00081e71b0e,0x0000005020854000\n"
".quad 0x0000003020038800,0x4000900020434800,0x0000000020854000,0x0000004020858000\n"
".quad 0x0000004fc085c900,0x0000ffffdc04c900,0x400020001de450ee,0xc00004001c032800\n"
".quad 0x0000fc01dc035800,0x0001800001e7190e,0x00000031dc034000,0x0000c00081e71b0e\n"
".quad 0x0000003160034000,0x00000041a0854800,0xc00008516203c100,0x0000005160856000\n"
".quad 0x000014616000c100,0x0000004160855000,0x0000ffffdc04c900,0xc00004001c0350ee\n"
".quad 0x0000fc01dc035800,0xfffe800001e71a8e,0x0000fc31dc234003,0x0000000001e71a8e\n"
".quad 0x400080209c438000,0x000003f01c854000,0x000000201c85c100,0x000000001de79000\n"
".quad 0x0000000000008000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0001000000000000,0x000000140c040000\n"
".quad 0x0008000000040000,0x00100000000c0000,0x001000080a040000,0x1903001400200000\n"
".quad 0xffff000c17040014,0xf00000100004ffff,0xffff000c17040011,0xf000000c0003ffff\n"
".quad 0xffff000c17040011,0xf00000080002ffff,0xffff000c17040011,0xf00000040001ffff\n"
".quad 0xffff000c17040011,0xf00000000000ffff,0x001800080d040011,0x0704000000010002\n"
".quad 0xffff000000170010,0xffffffffffffffff,0x001600100704ffff,0xffffffffffff0000\n"
".quad 0x0704ffffffffffff,0xffff000000150010,0xffffffffffffffff,0x001400081204ffff\n"
".quad 0x1104000000000000,0x0000000000140008,0x0013000812040000,0x1104000000000000\n"
".quad 0x0000000000130008,0x0012000812040000,0x1104000000000000,0x0000000000120008\n"
".quad 0x0011000812040000,0x1104000000000000,0x0000000000110008,0x0000000600000000\n"
".quad 0x000000000000185c,0x000000a000000000,0x00000005000000a0,0x6000000000000004\n"
".quad 0x0000000000000636,0x00000f9c00000000,0x0000120500000f9c,0x6000000000000004\n"
".quad 0x00000000000015d2,0x0000000000000000,0x0000120600000110,0x6000000000000004\n"
".quad 0x00000000000015d2,0x000001ec00000000,0x00001105000001ec,0x6000000000000004\n"
".quad 0x00000000000017be,0x0000000000000000,0x0000110600000100,0x0000000000000004\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_21$[800];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_21", (char*)__deviceText_$sm_21$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_21$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"52eb10dfd644de9c",(char*)"/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/main.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x9990dcf7,&__elfEntries1};
# 3 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c" 2
struct __T20 {uint4 *__par0;float *__par1;int __par2;int __dummy_field;};
struct __T21 {float *__par0;float *__par1;uint2 *__par2;int __par3;int __par4;int __dummy_field;};
extern void __device_stub__Z8ComputeXP5uint4Pfi(uint4 *, float *, int);
extern void __device_stub__Z11DoReductionPfS_P5uint2ii(float *, float *, uint2 *, int, int);
static void __sti____cudaRegisterAll_39_tmpxft_000014b0_00000000_4_main_cpp1_ii_texCoors(void) __attribute__((__constructor__));
void __device_stub__Z8ComputeXP5uint4Pfi(uint4 *__par0, float *__par1, int __par2){ struct __T20 *__T22 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T22->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T22->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T22->__par2) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(uint4 *, float *, int))ComputeX)); (void)cudaLaunch(((char *)((void ( *)(uint4 *, float *, int))ComputeX))); };}
void ComputeX( uint4 *__cuda_0,float *__cuda_1,int __cuda_2)
# 38 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{__device_stub__Z8ComputeXP5uint4Pfi( __cuda_0,__cuda_1,__cuda_2);
# 115 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
}
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c"
void __device_stub__Z11DoReductionPfS_P5uint2ii( float *__par0, float *__par1, uint2 *__par2, int __par3, int __par4) { struct __T21 *__T23 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T23->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T23->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T23->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T23->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T23->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, uint2 *, int, int))DoReduction)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, uint2 *, int, int))DoReduction))); }; }
void DoReduction( float *__cuda_0,float *__cuda_1,uint2 *__cuda_2,int __cuda_3,int __cuda_4)
# 120 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
{__device_stub__Z11DoReductionPfS_P5uint2ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 147 "/home/normal/checkout/gpuocelot/tests/parboil/tests/rpes/crys_kernel.cu"
}
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c"
static void __sti____cudaRegisterAll_39_tmpxft_000014b0_00000000_4_main_cpp1_ii_texCoors(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, uint2 *, int, int))DoReduction), (char*)"_Z11DoReductionPfS_P5uint2ii", "_Z11DoReductionPfS_P5uint2ii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uint4 *, float *, int))ComputeX), (char*)"_Z8ComputeXP5uint4Pfi", "_Z8ComputeXP5uint4Pfi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texCoors, (const void**)"texCoors", "texCoors", 1, 0, 0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texSprms, (const void**)"texSprms", "texSprms", 1, 0, 0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texWghts, (const void**)"texWghts", "texWghts", 1, 0, 0); }
# 1 "/tmp/tmpxft_000014b0_00000000-1_main.cudafe1.stub.c" 2
