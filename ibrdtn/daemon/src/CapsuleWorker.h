/*
 * CapsuleWorker.h
 *
 * Copyright (C) 2011 IBR, TU Braunschweig
 *
 * Written-by: Johannes Morgenroth <morgenroth@ibr.cs.tu-bs.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef CAPSULEWORKER_H_
#define CAPSULEWORKER_H_

#include "core/AbstractWorker.h"
#include <ibrdtn/data/Bundle.h>
#include <ibrcommon/data/BLOB.h>
#include <list>

namespace dtn
{
	namespace daemon
	{
		class CapsuleWorker : public dtn::core::AbstractWorker
		{
		public:
			CapsuleWorker();
			virtual ~CapsuleWorker();

			void callbackBundleReceived(const dtn::data::Bundle &b);
		};
	}
}

#endif /* CAPSULEWORKER_H_ */