/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAContainerProvider.h>

@class CNContactStore;

@interface _DAContactsContainerProvider : DAContainerProvider {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(id)allContainers;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg1 ;
-(id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2 ;
-(id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8 ;
-(void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3 ;
-(BOOL)setLastSyncDateForContainer:(id)arg1 ;
@end

