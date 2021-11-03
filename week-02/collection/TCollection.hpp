#ifndef TCOLLECTION_H
#define TCOLLECTION_H

#include "my_types.h"
#include "my_log.h"

template <typename T>
class TCollection
{
	private:
		T* 		m_dArray;
		INTEGER m_size;

		BOOL isAllocated() CONST {
			return m_dArray && m_size != -1;
		}

		ReturnType AllocateMemory(VOID* dArray, INTEGER size) {
			dArray = new T[size];
			if (!dArray) {
				LOG_ERROR("NUll pointer");
				//TODO 1: Double check memory state condition.
				//TODO 2: Implemnt a MMU.
				return AGRMemoryAllocationFailure;
			}

			m_dArray 	= m_dArray;
			m_size 		= size;

			return AGRMemoryAllocationSuccesss;
		}

		ReturnType FreeMemory(VOID* dArray, INTEGER size) {
			if (isAllocated()) {
				// Setting it as earl as possible for safety.
				m_size = -1;
				LOG_INFO("Success");
				delete m_dArray;
				m_dArray = NULL;
			} else {
				LOG_ERROR("Failed");
				return AGRFreeMemoryFailure;
			}
				return AGRFreeMemorySuccess;
		}
	public:

		TCollection() : m_dArray(NULL), m_size(-1) {
			LOG_INFO("TCollection()");
		}
		~TCollection() {
			LOG_INFO("~TCollection()");
			FreeMemory(static_cast<VOID*>(m_dArray), m_size);
		}

		ReturnType Create(INTEGER size) {
			ReturnType ret = AGRReturnNone;

			if (!isAllocated() && size > 0) {
				ret = AllocateMemory(static_cast<VOID*>(m_dArray), size);
				if (ret == AGRSuccess) {
					ret = AGRSuccess;
					LOG_INFO("Success");
				} else {
					ret = AGRMemoryAllocationFailure;
					LOG_ERROR("Failed");
				}
			} else {
				ret = AGRCreateError;
			}

			return ret;
		}

		//TODO: Add boundary check. Or change return type with pointer.
		T& operator[](int index) {
			return m_dArray[index];
		}
};
#endif