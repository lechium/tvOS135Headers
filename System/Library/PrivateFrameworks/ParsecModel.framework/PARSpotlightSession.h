/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARSpotlightSession : NSManagedObject

@property (assign,nonatomic) short appLaunch; 
@property (assign,nonatomic) short onDeviceAddressBookData; 
@property (assign,nonatomic) short onDeviceOtherPersonalData; 
@property (assign,nonatomic) short other; 
@property (assign,nonatomic) short parsec; 
@property (assign,nonatomic) short punchout; 
@property (assign,nonatomic) short querySuggestion; 
@property (assign,nonatomic) short thirdPartyInAppContent; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (assign,nonatomic) short siriSuggestions; 
+(id)fetchRequest;
@end

