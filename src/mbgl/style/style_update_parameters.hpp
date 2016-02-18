#ifndef STYLE_UPDATE_PARAMETERS
#define STYLE_UPDATE_PARAMETERS

#include <mbgl/map/mode.hpp>

namespace mbgl {

class TransformState;
class Worker;
class FileSource;
class MapData;
class Style;
namespace gl { class TexturePool; }

class StyleUpdateParameters {
public:
    StyleUpdateParameters(float pixelRatio_,
                          MapDebugOptions debugOptions_,
                          TimePoint animationTime_,
                          const TransformState& transformState_,
                          Worker& worker_,
                          FileSource& fileSource_,
                          gl::TexturePool& texturePool_,
                          bool shouldReparsePartialTiles_,
                          const MapMode mode_,
                          MapData& data_,
                          Style& style_)
        : pixelRatio(pixelRatio_),
          debugOptions(debugOptions_),
          animationTime(animationTime_),
          transformState(transformState_),
          worker(worker_),
          fileSource(fileSource_),
          texturePool(texturePool_),
          shouldReparsePartialTiles(shouldReparsePartialTiles_),
          mode(mode_),
          data(data_),
          style(style_) {}

    float pixelRatio;
    MapDebugOptions debugOptions;
    TimePoint animationTime;
    const TransformState& transformState;
    Worker& worker;
    FileSource& fileSource;
    gl::TexturePool& texturePool;
    bool shouldReparsePartialTiles;
    const MapMode mode;

    // TODO: remove
    MapData& data;
    Style& style;
};

}

#endif
