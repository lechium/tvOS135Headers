/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFMirroredManyToManyRelationship.h>

@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship
+(BOOL)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2 ;
-(id)initWithRecordID:(id)arg1 forRecordWithID:(id)arg2 relatedToRecordWithID:(id)arg3 byRelationship:(id)arg4 withInverse:(id)arg5 andType:(unsigned long long)arg6 ;
-(id)initWithRecord:(id)arg1 andValues:(id)arg2 withManagedObjectModel:(id)arg3 andType:(unsigned long long)arg4 ;
-(void)populateRecordValues:(id)arg1 ;
@end
