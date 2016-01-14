
// IdaOgg: A mini Vorbis Ogg clip player for IDA
// Sean Barrett's "Ogg Vorbis decoder"
// http://nothings.org/stb_vorbis/
// Public Domain "license"
// IDA Pro wrapper by Sirmabus 2015
// http://www.macromonkey.com
#pragma once

#ifndef _LIB
#ifndef _DEBUG
#pragma comment(lib, "IdaOggPlayer.LiB")
#else
#pragma comment(lib, "IdaOggPlayerD.LiB")
#endif
#endif

namespace OggPlay
{
    // Play Ogg from memory source, optionally asynchronously    
    void __cdecl playFromMemory(const PVOID memory, int length, BOOL async = FALSE);

    // Stop the currently playing wave if there is one and clean up.
    // This needs to eb called after each playOggFromMemory() when done if async = TRUE
    void __cdecl endPlay();
};


