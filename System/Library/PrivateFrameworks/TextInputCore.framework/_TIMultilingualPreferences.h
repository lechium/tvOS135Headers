/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIMultilingualPreferenceProviding.h>

@class TIInputMode, NSArray, NSString;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@property (nonatomic,readonly) NSArray * userPreferredLanguages; 
+(id)inputModesForIdentifiers:(id)arg1 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
-(NSArray *)userPreferredLanguages;
@end

