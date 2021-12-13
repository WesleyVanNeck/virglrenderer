/*
 * Copyright 2021 Google LLC
 * SPDX-License-Identifier: MIT
 */

#include "proxy_common.h"

#include <stdarg.h>
#include <stdio.h>

struct proxy_renderer proxy_renderer;

void
proxy_log(const char *fmt, ...)
{
   va_list va;
   va_start(va, fmt);
   virgl_logv(fmt, va);
   va_end(va);
}
