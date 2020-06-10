/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding> {

	NSString* _applicationIdentifier;
	NSString* _teamIdentifier;
	NSString* _localizedName;
	NSArray* _activityTypes;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                     //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * activityTypes;                       //@synthesize activityTypes=_activityTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)teamIdentifier;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSArray *)activityTypes;
-(id)initWithApplicationIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4 ;
-(id)initWithLSApplicationProxy:(id)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setActivityTypes:(NSArray *)arg1 ;
@end

