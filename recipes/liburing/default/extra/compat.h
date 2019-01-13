/*
 * Copyright 2019 curoky(cccuroky@gmail.com).
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
 */

#ifndef LIBURING_COMPAT_H
#define LIBURING_COMPAT_H

#include <inttypes.h>
#include <linux/time_types.h>

struct open_how {
  uint64_t flags;
  uint64_t mode;
  uint64_t resolve;
};

#endif
