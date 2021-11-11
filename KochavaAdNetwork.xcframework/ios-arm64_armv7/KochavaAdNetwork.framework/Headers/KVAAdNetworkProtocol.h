//
//  KVAAdNetworkProtocol.h
//  KochavaAdNetwork
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAdNetworkProtocol_h
#define KVAAdNetworkProtocol_h



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



@class KVAAdNetwork;
@class KVAAdNetworkConversion;



#pragma mark - TYPEDEF



/*!
 @typedef KVAAdNetworkDidRegisterAppForAttributionBlock
 
 @brief A closure which is called when the SKAdNetwork registerAppForAdNetworkAttribution API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
typedef void (^ KVAAdNetworkDidRegisterAppForAttributionBlock)
(
    KVAAdNetwork * _Nonnull adNetwork
);



#pragma mark - INTERFACE - INTERNAL



@protocol KVAAdNetworkProtocol <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



#pragma mark - PARAMETERS



/*!
 @property didRegisterAppForAttributionBlock
 
 @brief A closure which is called when the SKAdNetwork registerAppForAdNetworkAttribution API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
@property (strong, nonatomic, nullable, readwrite) KVAAdNetworkDidRegisterAppForAttributionBlock didRegisterAppForAttributionBlock;



#pragma mark - PROPERTIES



/*!
 @property conversion
 
 @brief The current conversion information.
 */
@property (strong, nonatomic, nonnull, readwrite) KVAAdNetworkConversion *conversion;



@end



#endif



