import { Component, OnInit, EventEmitter, Output } from '@angular/core';
// import { runInThisContext } from 'node:vm';
// import EventEmitter = require('node:events');

@Component({
  selector: 'app-cockpit',
  templateUrl: './cockpit.component.html',
  styleUrls: ['./cockpit.component.css']
})
export class CockpitComponent implements OnInit {

  @Output() serverCreated = new EventEmitter
  <{serverName: string, serverContent: string}>();
  @Output() blueprintCreated = new EventEmitter
  <{serverName: string, serverContent: string}>();
  
  // newServerName = '';
  newServerContent = '';

  onAddServer(nameInput: HTMLInputElement) {
    this.serverCreated.emit({
      serverName: nameInput.value,
      serverContent: this.newServerContent
    })
  }

  onAddBlueprint(nameInput: HTMLInputElement) {
    this.serverCreated.emit({
      serverName: nameInput.value,
      serverContent: this.newServerContent
    })
  }


  

  constructor() { }

  ngOnInit(): void {
  }

}
