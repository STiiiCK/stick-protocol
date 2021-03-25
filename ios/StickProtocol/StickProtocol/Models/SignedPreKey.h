//
//  SignedPreKey.h
//  Pods
//
//  Created by Chris Ballinger on 6/29/16.
//
//

#import <Foundation/Foundation.h>
#import "Serializable.h"
#import "KeyPair.h"

NS_ASSUME_NONNULL_BEGIN
@interface SignedPreKey : NSObject <Serializable, NSSecureCoding>

@property (nonatomic, readonly) uint32_t preKeyId;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) uint64_t *unixTimestamp;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly, nullable) KeyPair *keyPair;

@end
NS_ASSUME_NONNULL_END
