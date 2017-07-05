/*
 * Copyright (c) 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_VM_RUNTIME_ARGUMENTS_EXT_HPP
#define SHARE_VM_RUNTIME_ARGUMENTS_EXT_HPP

#include "memory/allocation.hpp"
#include "runtime/arguments.hpp"

class ArgumentsExt: AllStatic {
public:
  static inline void select_gc_ergonomically();
  static inline bool check_gc_consistency_user();
  static inline bool check_gc_consistency_ergo();
  static inline bool check_vm_args_consistency();
  // The argument processing extension. Returns true if there is
  // no additional parsing needed in Arguments::parse() for the option.
  // Otherwise returns false.
  static inline bool process_options(const JavaVMOption *option) { return false; }
};

void ArgumentsExt::select_gc_ergonomically() {
  Arguments::select_gc_ergonomically();
}

bool ArgumentsExt::check_gc_consistency_user() {
  return Arguments::check_gc_consistency_user();
}

bool ArgumentsExt::check_gc_consistency_ergo() {
  return Arguments::check_gc_consistency_ergo();
}

bool ArgumentsExt::check_vm_args_consistency() {
  return Arguments::check_vm_args_consistency();
}

#endif // SHARE_VM_RUNTIME_ARGUMENTS_EXT_HPP
