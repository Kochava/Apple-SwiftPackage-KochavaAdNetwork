//
//  KVAAdNetworkConversion.h
//  KochavaAdNetwork
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2021 Kochava, Inc. All rights reserved.
//



#ifndef KVAAdNetworkConversion_h
#define KVAAdNetworkConversion_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - CLASS



@class KVAAdNetworkConversion;
@class KVAAdNetworkConversionResult;



#pragma mark - TYPEDEF



/*!
 @typedef KVAAdNetworkConversionDidUpdateValueBlock
 
 @brief A block which is called when the SKAdNetwork updateConversionValue API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
typedef void (^ KVAAdNetworkConversionDidUpdateValueBlock) (KVAAdNetworkConversion * _Nonnull conversion, KVAAdNetworkConversionResult * _Nonnull result);



#pragma mark - INTERFACE



@interface KVAAdNetworkConversion : NSObject <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



#pragma mark - PARAMETERS



/*!
 @property didUpdateValueBlock
 
 @brief A block which is called when the SKAdNetwork updateConversionValue API has been called.
 
 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
@property (strong, nonatomic, nullable, readwrite) KVAAdNetworkConversionDidUpdateValueBlock didUpdateValueBlock;



#pragma mark - PROPERTIES



/*!
 @property result
 
 @brief The current conversion result.
 
 @discussion This object will mutate when the current result is updated.  If you want a immutable picture then you should take a copy.
 */
@property (strong, nonatomic, nonnull, readonly) KVAAdNetworkConversionResult *result;



@end



#endif



