//
//  MTLEXTScope.m
//  extobjc
//
//  Created by Justin Spahr-Summers on 2011-05-04.
//  Copyright © 2012 Justin Spahr-Summers.
//  Released under the MIT license.
//

#import "MTLEXTScope.h"

void mtl_executeCleanupBlock (__strong mtl_cleanupBlock_t *block) {
    (*block)();
}

