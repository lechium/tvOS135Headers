/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VNPersonsModelFaceModelDataProvider <NSObject>
@required
-(unsigned long long)faceModelPersonsCount;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
-(unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
-(unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
-(id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;

@end
