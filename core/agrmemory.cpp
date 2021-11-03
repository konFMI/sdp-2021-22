#include <stdlib.h>
#include "agrmemory.h"

AGRMemory::AGRMemory() {
    m_agrmemory = nullptr;
}
AGRMemory::~AGRMemory() {
    if (!m_agrmemory) {
        delete m_agrmemory;
    }
}

void* AGRMemory::Allocate(int size, int bytes) {

    if (size > 0 && bytes > 0) {
        m_agrmemory = std::malloc(size * bytes);
        if (m_agrmemory == nullptr) {

        }
    }

}

void* AGRMemory::Free() {

}

void* AGRMemory::GetRaw() {
    return m_agrmemory;
}
