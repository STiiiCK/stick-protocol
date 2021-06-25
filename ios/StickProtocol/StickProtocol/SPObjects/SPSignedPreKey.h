//
//  SignedPreKey.h
//  STiiiCK
//
//  Created by Omar Basem on 10/08/2020.
//  Copyright © 2018-2021 STiiiCK. All rights reserved.
//

#import "YapDatabaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPSignedPreKey : YapDatabaseObject

@property (nonatomic) uint32_t keyId;
@property (nonatomic, strong) NSData *keyData;

- (nullable instancetype)initWithKeyId:(uint32_t)keyId keyData:(NSData *)keyData;

+ (NSString *)uniqueKeyForKeyId:(uint32_t)keyId;


@end

NS_ASSUME_NONNULL_END

