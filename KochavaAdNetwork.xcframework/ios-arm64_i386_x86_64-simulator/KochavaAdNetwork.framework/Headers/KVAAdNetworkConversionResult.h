//
//  KVAAdNetworkConversionResult.h
//  KochavaAdNetwork
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2021 Kochava, Inc. All rights reserved.
//



#ifndef KVAAdNetworkConversionResult_h
#define KVAAdNetworkConversionResult_h



#pragma mark - IMPORT



#pragma mark KochavaCore
#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - INTERFACE



@interface KVAAdNetworkConversionResult : NSObject <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



#pragma mark - PROPERTIES



/*!
 @property modelString
 
 @brief A string which represents the model used for the conversion.
 */
@property (strong, nonatomic, nullable, readonly) NSString *modelString;



/*!
 @property translatedValueIntNumber
 
 @brief An integer representing the translated value.
 
 @discussion This value is regarded as being restricted to 6-bits due to Apple's requirement regarding the value.  This is translated from the rawValueNumber.  This does not include any extension interval value (extensionIntervalTranslatedValueIntNumber).
 */
@property (strong, nonatomic, nullable, readonly) NSNumber *translatedValueIntNumber;



/*!
 @property rawValueNumber
 
 @brief A number representing the raw value.
 
 @discussion This is a raw value which has not had any translations applied yet.  This also does not include any extension interval value (extensionIntervalTranslatedValueIntNumber).
 */
@property (strong, nonatomic, nullable, readonly) NSNumber *rawValueNumber;



#pragma mark - GENERAL



/*!
 @method - valueInt
 
 @brief Returns the conversion value integer which is used with the SKAdNetwork updateConversionValue API.
 
 @discussion Apple currently restricts this value to 6-bits.  This is a combination (OR) of the translated value (translatedValueIntNumber.integerValue) with any extension interval value (extensionIntervalTranslatedValueIntNumber.integerValue).
 */
- (NSInteger)valueInt;



@end



#endif



